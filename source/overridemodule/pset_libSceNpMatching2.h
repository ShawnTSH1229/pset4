#pragma once
#include "PsetLibraryCommon.h" 
int PSET_SYSV_ABI Pset_sceNpMatching2AbortContextStart(void);
int PSET_SYSV_ABI Pset_sceNpMatching2ContextStart(void);
int PSET_SYSV_ABI Pset_sceNpMatching2ContextStop(void);
int PSET_SYSV_ABI Pset_sceNpMatching2CreateContext(void);
int PSET_SYSV_ABI Pset_sceNpMatching2CreateContextA(void);
int PSET_SYSV_ABI Pset_sceNpMatching2CreateContextInternal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2CreateJoinRoom(void);
int PSET_SYSV_ABI Pset_sceNpMatching2CreateJoinRoomA(void);
int PSET_SYSV_ABI Pset_sceNpMatching2DestroyContext(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetLobbyInfoList(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetLobbyMemberDataInternal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetLobbyMemberDataInternalList(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetMemoryInfo(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetRoomDataExternalList(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetRoomDataInternal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetRoomJoinedSlotMaskLocal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetRoomMemberDataExternalList(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetRoomMemberDataInternal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetRoomMemberIdListLocal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetRoomPasswordLocal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetServerId(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetSignalingOptParamLocal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetSslMemoryInfo(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetUserInfoList(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetUserInfoListA(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetWorldIdArrayForAllServers(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GetWorldInfoList(void);
int PSET_SYSV_ABI Pset_sceNpMatching2GrantRoomOwner(void);
int PSET_SYSV_ABI Pset_sceNpMatching2Initialize(void);
int PSET_SYSV_ABI Pset_sceNpMatching2JoinLobby(void);
int PSET_SYSV_ABI Pset_sceNpMatching2JoinRoom(void);
int PSET_SYSV_ABI Pset_sceNpMatching2JoinRoomA(void);
int PSET_SYSV_ABI Pset_sceNpMatching2KickoutRoomMember(void);
int PSET_SYSV_ABI Pset_sceNpMatching2LeaveLobby(void);
int PSET_SYSV_ABI Pset_sceNpMatching2LeaveRoom(void);
int PSET_SYSV_ABI Pset_sceNpMatching2RegisterContextCallback(void);
int PSET_SYSV_ABI Pset_sceNpMatching2RegisterLobbyEventCallback(void);
int PSET_SYSV_ABI Pset_sceNpMatching2RegisterLobbyMessageCallback(void);
int PSET_SYSV_ABI Pset_sceNpMatching2RegisterManualUdpSignalingCallback(void);
int PSET_SYSV_ABI Pset_sceNpMatching2RegisterRoomEventCallback(void);
int PSET_SYSV_ABI Pset_sceNpMatching2RegisterRoomMessageCallback(void);
int PSET_SYSV_ABI Pset_sceNpMatching2RegisterSignalingCallback(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SearchRoom(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SendLobbyChatMessage(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SendRoomChatMessage(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SendRoomMessage(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SetDefaultRequestOptParam(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SetExtraInitParam(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SetLobbyMemberDataInternal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SetRoomDataExternal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SetRoomDataInternal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SetRoomDataInternalExt(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SetRoomMemberDataInternal(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SetSignalingOptParam(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SetUserInfo(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingAbortConnection(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingCancelPeerNetInfo(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingEnableManualUdpMode(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingEstablishConnection(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingGetConnectionInfo(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingGetConnectionInfoA(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingGetConnectionStatus(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingGetLocalNetInfo(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingGetPeerNetInfo(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingGetPeerNetInfoResult(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingGetPingInfo(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingGetPort(void);
int PSET_SYSV_ABI Pset_sceNpMatching2SignalingSetPort(void);
int PSET_SYSV_ABI Pset_sceNpMatching2Terminate(void);
