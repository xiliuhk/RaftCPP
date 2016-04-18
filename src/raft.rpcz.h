// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raft.proto

#ifndef RPCZ_raft_2eproto__INCLUDED
#define RPCZ_raft_2eproto__INCLUDED

#include <string>
#include <rpcz/service.hpp>

namespace google {
namespace protobuf {
class ServiceDescriptor;
class MethodDescriptor;
}  // namespace protobuf
}  // namespace google
namespace rpcz {
class rpc;
class closure;
class rpc_channel;
}  //namesacpe rpcz
#include "raft.pb.h"
void rpcz_protobuf_AssignDesc_raft_2eproto();
void rpcz_protobuf_ShutdownFile_raft_2eproto();

class RaftService_Stub;

class RaftService : public rpcz::service {
 protected:
  // This class should be treated as an abstract interface.
  inline RaftService() {};
 public:
  virtual ~RaftService();

  typedef RaftService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void GetStatus(const ::Empty& request,
                       ::rpcz::reply< ::PeerStatus> response);
  virtual void AppendMsg(const ::Empty& request,
                       ::rpcz::reply< ::Empty> response);
  virtual void Vote(const ::VoteRequest& request,
                       ::rpcz::reply< ::VoteReply> response);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void call_method(const ::google::protobuf::MethodDescriptor* method,
                  const ::google::protobuf::Message& request,
                  ::rpcz::server_channel* channel);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RaftService);
};

class RaftService_Stub {
 public:
  RaftService_Stub(::rpcz::rpc_channel* channel, 
                   bool owns_channel=false);
  RaftService_Stub(::rpcz::rpc_channel* channel, 
                   const ::std::string& service_name,
                   bool owns_channel=false);
  ~RaftService_Stub();

  inline ::rpcz::rpc_channel* channel() { return channel_; }


  void GetStatus(const ::Empty& request,
                       ::PeerStatus* response,
                       ::rpcz::rpc* rpc,                     ::rpcz::closure* done);
  void GetStatus(const ::Empty& request,
                       ::PeerStatus* response,
                       long deadline_ms = -1);
  void AppendMsg(const ::Empty& request,
                       ::Empty* response,
                       ::rpcz::rpc* rpc,                     ::rpcz::closure* done);
  void AppendMsg(const ::Empty& request,
                       ::Empty* response,
                       long deadline_ms = -1);
  void Vote(const ::VoteRequest& request,
                       ::VoteReply* response,
                       ::rpcz::rpc* rpc,                     ::rpcz::closure* done);
  void Vote(const ::VoteRequest& request,
                       ::VoteReply* response,
                       long deadline_ms = -1);
 private:
  ::rpcz::rpc_channel* channel_;
  ::std::string service_name_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RaftService_Stub);
};

#endif  // RPCZ_raft_2eproto__INCLUDED
