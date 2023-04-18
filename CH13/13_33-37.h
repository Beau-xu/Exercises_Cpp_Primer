#pragma once

#include <iostream>
#include <unordered_set>

class Folder;

class Message {
    friend class Folder;
    friend void swap(Message &, Message &);
    friend std::ostream &operator<<(std::ostream &, const Message &);
    friend std::ostream &operator<<(std::ostream &, const Folder &);

   private:
    std::unordered_set<Folder *> set_fds_;
    std::string msg_;
    void addToFds_();
    void remFromFds_();

   public:
    explicit Message(const std::string &s = "") : msg_(s) {}
    Message(const Message &);
    Message &operator=(const Message &);

    ~Message();

    void save(Folder *);
    void remove(Folder *);
    void addFd(Folder *);
    void remFd(Folder *);
};

class Folder {
    friend std::ostream &operator<<(std::ostream &, const Folder &);

   private:
    std::unordered_set<Message *> set_msgs_;

   public:
    Folder() = default;
    ~Folder();
    void addMsg(Message *);
    void remMsg(Message *);
};

/* -------------- Message definition ----------------- */
inline void Message::addToFds_() {
    for (auto pf : set_fds_) pf->addMsg(this);
}

inline void Message::remFromFds_() {
    for (auto pf : set_fds_) pf->remMsg(this);
}

inline Message::Message(const Message &obj)
    : msg_(obj.msg_), set_fds_(obj.set_fds_) {
    addToFds_();
}

inline Message &Message::operator=(const Message &obj) {
    remFromFds_();
    msg_ = obj.msg_;
    set_fds_ = obj.set_fds_;
    addToFds_();
    return *this;
}

inline Message::~Message() { remFromFds_(); }

inline void Message::save(Folder *pf) {
    set_fds_.insert(pf);
    pf->addMsg(this);
}

inline void Message::remove(Folder *pf) {
    set_fds_.erase(pf);
    pf->remMsg(this);
}

void Message::addFd(Folder *pf) { set_fds_.insert(pf); }

void Message::remFd(Folder *pf) { set_fds_.erase(pf); }

/* --------------------- Folder definition ------------------------*/
inline Folder::~Folder() {
    for (auto pm : set_msgs_) pm->remFd(this);
}

inline void Folder::addMsg(Message *pm) { set_msgs_.insert(pm); }

inline void Folder::remMsg(Message *pm) { set_msgs_.erase(pm); }

/* ------------ friend definition -------------------- */
void swap(Message &lhs, Message &rhs) {
    lhs.remFromFds_();
    rhs.remFromFds_();
    swap(lhs.set_fds_, rhs.set_fds_);
    swap(lhs.msg_, rhs.msg_);
    lhs.addToFds_();
    rhs.addToFds_();
}

std::ostream &operator<<(std::ostream &os, const Message &m) {
    os << m.msg_;
    return os;
}

std::ostream &operator<<(std::ostream &os, const Folder &f) {
    for (auto pm : f.set_msgs_) os << pm->msg_ << " ";
    return os;
}
