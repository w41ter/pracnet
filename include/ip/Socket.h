#pragma once 

#include <ip/helper/socket.h>   // socket_t

namespace network {
namespace ip {

class Socket 
{
    socket::socket_t handle_;

public:
    explicit Socket();
    explicit Socket(socket::socket_t fd);
    ~Socket();
    
    Socket(const Socket &) = default;
    Socket & operator = (const Socket &) = default;

    socket::socket_t handle() const {
        return handle_;
    }

    // TODO: options
};

} // namespace ip
} // namespace network