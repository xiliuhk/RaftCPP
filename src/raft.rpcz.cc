// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "raft.rpcz.h"
#include "raft.pb.h"
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/once.h>
#include <rpcz/rpcz.hpp>
namespace {
const ::google::protobuf::ServiceDescriptor* RaftService_descriptor_ = NULL;
}  // anonymouse namespace

void rpcz_protobuf_AssignDesc_raft_2eproto() {
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "raft.proto");
  GOOGLE_CHECK(file != NULL);
  RaftService_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &rpcz_protobuf_AssignDesc_raft_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void rpcz_protobuf_ShutdownFile_raft_2eproto() {
}

void rpcz_protobuf_AddDesc_raft_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nraft.proto\"b\n\013VoteRequest\022\014\n\004term\030\001 \002("
    "\004\022\024\n\014candidate_id\030\002 \002(\t\022\026\n\016last_log_inde"
    "x\030\003 \002(\004\022\027\n\017last_term_index\030\004 \002(\004\"\'\n\tVote"
    "Reply\022\014\n\004term\030\001 \002(\004\022\014\n\004vote\030\002 \002(\010\"E\n\010Log"
    "Entry\022\035\n\002op\030\001 \002(\0162\010.EntryOp:\007INVALID\022\013\n\003"
    "key\030\002 \001(\t\022\r\n\005value\030\003 \001(\t\"~\n\rAppendReques"
    "t\022\014\n\004term\030\001 \002(\004\022\024\n\014candidate_id\030\002 \002(\t\022\026\n"
    "\016prev_log_index\030\003 \002(\004\022\025\n\rprev_log_term\030\004"
    " \002(\004\022\032\n\007entries\030\005 \003(\0132\t.LogEntry\",\n\013Appe"
    "ndReply\022\014\n\004term\030\001 \002(\004\022\017\n\007success\030\002 \002(\010\"\210"
    "\001\n\nPeerStatus\022\014\n\004term\030\001 \002(\004\022,\n\006status\030\002 "
    "\002(\0162\022.PeerStatus.Status:\010FOLLOWER\">\n\006Sta"
    "tus\022\013\n\007UNKNOWN\020\000\022\014\n\010FOLLOWER\020\001\022\r\n\tCANDID"
    "ATE\020\002\022\n\n\006LEADER\020\003\"=\n\tOpRequest\022\024\n\002op\030\001 \002"
    "(\0162\010.EntryOp\022\013\n\003key\030\002 \001(\t\022\r\n\005value\030\003 \001(\t"
    "\"\032\n\007OpReply\022\017\n\007success\030\001 \002(\010\"\007\n\005Empty*9\n"
    "\007EntryOp\022\013\n\007INVALID\020\000\022\n\n\006INSERT\020\001\022\n\n\006DEL"
    "ETE\020\002\022\t\n\005QUERY\020\0032\230\001\n\013RaftService\022 \n\tGetS"
    "tatus\022\006.Empty\032\013.PeerStatus\022)\n\tAppendMsg\022"
    "\016.AppendRequest\032\014.AppendReply\022 \n\004Vote\022\014."
    "VoteRequest\032\n.VoteReply\022\032\n\002Op\022\n.OpReques"
    "t\032\010.OpReply", 851);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "raft.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&rpcz_protobuf_ShutdownFile_raft_2eproto);
}

// ===================================================================

RaftService::~RaftService() {}

const ::google::protobuf::ServiceDescriptor* RaftService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RaftService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* RaftService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return RaftService_descriptor_;
}

void RaftService::GetStatus(const ::Empty&,
                         ::rpcz::reply< ::PeerStatus> reply) {
  reply.Error(::rpcz::application_error::METHOD_NOT_IMPLEMENTED,
              "Method GetStatus() not implemented.");
}

void RaftService::AppendMsg(const ::AppendRequest&,
                         ::rpcz::reply< ::AppendReply> reply) {
  reply.Error(::rpcz::application_error::METHOD_NOT_IMPLEMENTED,
              "Method AppendMsg() not implemented.");
}

void RaftService::Vote(const ::VoteRequest&,
                         ::rpcz::reply< ::VoteReply> reply) {
  reply.Error(::rpcz::application_error::METHOD_NOT_IMPLEMENTED,
              "Method Vote() not implemented.");
}

void RaftService::Op(const ::OpRequest&,
                         ::rpcz::reply< ::OpReply> reply) {
  reply.Error(::rpcz::application_error::METHOD_NOT_IMPLEMENTED,
              "Method Op() not implemented.");
}

void RaftService::call_method(const ::google::protobuf::MethodDescriptor* method,
                             const ::google::protobuf::Message& request,
                             ::rpcz::server_channel* channel) {
  GOOGLE_DCHECK_EQ(method->service(), RaftService_descriptor_);
  switch(method->index()) {
    case 0:
      GetStatus(
          *::google::protobuf::down_cast<const ::Empty*>(&request),
          ::rpcz::reply< ::PeerStatus>(channel));
      break;
    case 1:
      AppendMsg(
          *::google::protobuf::down_cast<const ::AppendRequest*>(&request),
          ::rpcz::reply< ::AppendReply>(channel));
      break;
    case 2:
      Vote(
          *::google::protobuf::down_cast<const ::VoteRequest*>(&request),
          ::rpcz::reply< ::VoteReply>(channel));
      break;
    case 3:
      Op(
          *::google::protobuf::down_cast<const ::OpRequest*>(&request),
          ::rpcz::reply< ::OpReply>(channel));
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& RaftService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::Empty::default_instance();
    case 1:
      return ::AppendRequest::default_instance();
    case 2:
      return ::VoteRequest::default_instance();
    case 3:
      return ::OpRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& RaftService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::PeerStatus::default_instance();
    case 1:
      return ::AppendReply::default_instance();
    case 2:
      return ::VoteReply::default_instance();
    case 3:
      return ::OpReply::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

RaftService_Stub::RaftService_Stub(::rpcz::rpc_channel* channel,
                                   const ::std::string& service_name,
                                   bool owns_channel)
  : channel_(channel), service_name_(service_name),
    owns_channel_(owns_channel) {}
RaftService_Stub::RaftService_Stub(::rpcz::rpc_channel* channel,
                                   bool owns_channel)
  : channel_(channel), service_name_(RaftService::descriptor()->name()),
    owns_channel_(owns_channel) {}
RaftService_Stub::~RaftService_Stub() {
  if (owns_channel_) delete channel_;
}

void RaftService_Stub::GetStatus(const ::Empty& request,
                              ::PeerStatus* response,
                              ::rpcz::rpc* rpc,
                              ::rpcz::closure* done) {
  channel_->call_method(service_name_,
                        RaftService::descriptor()->method(0),
                        request, response, rpc, done);
}
void RaftService_Stub::GetStatus(const ::Empty& request,
                              ::PeerStatus* response,
                              long deadline_ms) {
  ::rpcz::rpc rpc;
  rpc.set_deadline_ms(deadline_ms);
  channel_->call_method(service_name_,
                        RaftService::descriptor()->method(0),
                        request, response, &rpc, NULL);
  rpc.wait();
  if (!rpc.ok()) {
    throw ::rpcz::rpc_error(rpc);
  }
}
void RaftService_Stub::AppendMsg(const ::AppendRequest& request,
                              ::AppendReply* response,
                              ::rpcz::rpc* rpc,
                              ::rpcz::closure* done) {
  channel_->call_method(service_name_,
                        RaftService::descriptor()->method(1),
                        request, response, rpc, done);
}
void RaftService_Stub::AppendMsg(const ::AppendRequest& request,
                              ::AppendReply* response,
                              long deadline_ms) {
  ::rpcz::rpc rpc;
  rpc.set_deadline_ms(deadline_ms);
  channel_->call_method(service_name_,
                        RaftService::descriptor()->method(1),
                        request, response, &rpc, NULL);
  rpc.wait();
  if (!rpc.ok()) {
    throw ::rpcz::rpc_error(rpc);
  }
}
void RaftService_Stub::Vote(const ::VoteRequest& request,
                              ::VoteReply* response,
                              ::rpcz::rpc* rpc,
                              ::rpcz::closure* done) {
  channel_->call_method(service_name_,
                        RaftService::descriptor()->method(2),
                        request, response, rpc, done);
}
void RaftService_Stub::Vote(const ::VoteRequest& request,
                              ::VoteReply* response,
                              long deadline_ms) {
  ::rpcz::rpc rpc;
  rpc.set_deadline_ms(deadline_ms);
  channel_->call_method(service_name_,
                        RaftService::descriptor()->method(2),
                        request, response, &rpc, NULL);
  rpc.wait();
  if (!rpc.ok()) {
    throw ::rpcz::rpc_error(rpc);
  }
}
void RaftService_Stub::Op(const ::OpRequest& request,
                              ::OpReply* response,
                              ::rpcz::rpc* rpc,
                              ::rpcz::closure* done) {
  channel_->call_method(service_name_,
                        RaftService::descriptor()->method(3),
                        request, response, rpc, done);
}
void RaftService_Stub::Op(const ::OpRequest& request,
                              ::OpReply* response,
                              long deadline_ms) {
  ::rpcz::rpc rpc;
  rpc.set_deadline_ms(deadline_ms);
  channel_->call_method(service_name_,
                        RaftService::descriptor()->method(3),
                        request, response, &rpc, NULL);
  rpc.wait();
  if (!rpc.ok()) {
    throw ::rpcz::rpc_error(rpc);
  }
}
