/********************************************************************************
*					Tangram Library - version 7.0								*
*********************************************************************************
* Copyright (C) 2002-2014 by Tangram Team.   All Rights Reserved.				*
*
* THIS SOURCE FILE IS THE PROPERTY OF TANGRAM TEAM AND IS NOT TO 
* BE RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED 
* WRITTEN CONSENT OF TANGRAM TEAM.
*
* THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS 
* OUTLINED IN THE TANGRAM LICENSE AGREEMENT.TANGRAM TEAM 
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE 
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:sunhuizlz@yeah.net
*
********************************************************************************/
#pragma once
#include "uccapi.h"
using namespace UCCAPILib;

namespace TangramOfficePlus
{
	namespace LyncPlus
	{
		namespace UccApiEvent
		{
			extern _ATL_FUNC_INFO OutgoingInvitation;
			extern _ATL_FUNC_INFO IncomingInvitation;
			extern _ATL_FUNC_INFO InvitationAccepted;
			extern _ATL_FUNC_INFO Renegotiate;

			class CUccApplicationSessionParticipantEvents : public IDispEventSimpleImpl<1, CUccApplicationSessionParticipantEvents, &__uuidof(_IUccApplicationSessionParticipantEvents)>
			{
			public:
				virtual void __stdcall OnOutgoingInvitation(IUccApplicationSessionParticipant* pEventSource, IUccOutgoingInvitationEvent* pEventData) {}
				virtual void __stdcall OnIncomingInvitation(IUccApplicationSessionParticipant* pEventSource, IUccIncomingInvitationEvent* pEventData) {}
				virtual void __stdcall OnInvitationAccepted(IUccApplicationSessionParticipant* pEventSource, IUccInvitationAcceptedEvent* pEventData) {}
				virtual void __stdcall OnRenegotiate(IUccApplicationSessionParticipant* pEventSource, IUccOperationProgressEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccApplicationSessionParticipantEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccApplicationSessionParticipantEvents), 0x0000044c, OnOutgoingInvitation, &OutgoingInvitation)
					SINK_ENTRY_INFO(1, __uuidof(_IUccApplicationSessionParticipantEvents), 0x0000044d, OnIncomingInvitation, &IncomingInvitation)
					SINK_ENTRY_INFO(1, __uuidof(_IUccApplicationSessionParticipantEvents), 0x0000044e, OnInvitationAccepted, &InvitationAccepted)
					SINK_ENTRY_INFO(1, __uuidof(_IUccApplicationSessionParticipantEvents), 0x00000451, OnRenegotiate, &Renegotiate)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO SignalLevelChanged;

			class CUccAudioMediaChannelEvents : public IDispEventSimpleImpl<1, CUccAudioMediaChannelEvents, &__uuidof(_IUccAudioMediaChannelEvents)>
			{
			public:
				virtual void __stdcall OnSignalLevelChanged(IUccAudioMediaChannel* pEventSource, IUccAudioSignalLevelChangedEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccAudioMediaChannelEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccAudioMediaChannelEvents), 0x00000578, OnSignalLevelChanged, &SignalLevelChanged)
				END_SINK_MAP()
			};


			extern _ATL_FUNC_INFO SourceChanged;
			extern _ATL_FUNC_INFO MediaStreamStateChanged;

			class CUccAudioVideoMediaChannelEvents : public IDispEventSimpleImpl<1, CUccAudioVideoMediaChannelEvents, &__uuidof(_IUccAudioVideoMediaChannelEvents)>
			{
			public:
				virtual void __stdcall OnSourceChanged(IUccMediaChannel* pEventSource, IUccAudioVideoMediaChannelSourceEvent* pEventData) {}
				virtual void __stdcall OnMediaStreamStateChanged(IUccMediaChannel* pEventSource, IUccAudioVideoMediaChannelStreamsEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccAudioVideoMediaChannelEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccAudioVideoMediaChannelEvents), 0x00000546, OnSourceChanged, &SourceChanged)
					SINK_ENTRY_INFO(1, __uuidof(_IUccAudioVideoMediaChannelEvents), 0x00000547, OnMediaStreamStateChanged, &MediaStreamStateChanged)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO PublishSessionMetrics;

			class CUccAudioVideoSessionEvents : public IDispEventSimpleImpl<1, CUccAudioVideoSessionEvents, &__uuidof(_IUccAudioVideoSessionEvents)>
			{
			public:
				virtual void __stdcall OnPublishSessionMetrics(IUccAudioVideoSession* pEventSource, IUccOperationProgressEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccAudioVideoSessionEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccAudioVideoSessionEvents), 0x00000320, OnPublishSessionMetrics, &PublishSessionMetrics)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO MediaRequest;
			extern _ATL_FUNC_INFO UpdateChannels;
			extern _ATL_FUNC_INFO MediaRequestCancelled;

			class CUccAudioVideoSessionParticipantEvents : public IDispEventSimpleImpl<1, CUccAudioVideoSessionParticipantEvents, &__uuidof(_IUccAudioVideoSessionParticipantEvents)>
			{
			public:
				virtual void __stdcall OnMediaRequest(IUccAudioVideoSessionParticipant* pEventSource, IUccIncomingMediaRequestEvent* pEventData) {}
				virtual void __stdcall OnUpdateChannels(IUccAudioVideoSessionParticipant* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnMediaRequestCancelled(IUccAudioVideoSessionParticipant* pEventSource, IUccIncomingMediaRequestEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccAudioVideoSessionParticipantEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccAudioVideoSessionParticipantEvents), 0x00000384, OnMediaRequest, &MediaRequest)
					SINK_ENTRY_INFO(1, __uuidof(_IUccAudioVideoSessionParticipantEvents), 0x00000387, OnUpdateChannels, &UpdateChannels)
					SINK_ENTRY_INFO(1, __uuidof(_IUccAudioVideoSessionParticipantEvents), 0x00000388, OnMediaRequestCancelled, &MediaRequestCancelled)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO CategoryInstanceAdded;
			extern _ATL_FUNC_INFO CategoryInstanceRemoved;

			class CUccCategoryContextEvents : public IDispEventSimpleImpl<1, CUccCategoryContextEvents, &__uuidof(_IUccCategoryContextEvents)>
			{
			public:
				virtual void __stdcall OnCategoryInstanceAdded(IUccCategoryContext* pCategoryCtxt, IUccCategoryInstanceEvent* pCategoryInstanceEvent) {}
				virtual void __stdcall OnCategoryInstanceRemoved(IUccCategoryContext* pCategoryCtxt, IUccCategoryInstanceEvent* pCategoryInstanceEvent) {}

				BEGIN_SINK_MAP(CUccCategoryContextEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccCategoryContextEvents), 0x000027d8, OnCategoryInstanceAdded, &CategoryInstanceAdded)
					SINK_ENTRY_INFO(1, __uuidof(_IUccCategoryContextEvents), 0x000027d9, OnCategoryInstanceRemoved, &CategoryInstanceRemoved)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO CategoryInstanceValueModified;

			class CUccCategoryInstanceEvents : public IDispEventSimpleImpl<1, CUccCategoryInstanceEvents, &__uuidof(_IUccCategoryInstanceEvents)>
			{
			public:
				virtual void __stdcall OnCategoryInstanceValueModified(IUccCategoryInstance* pCategoryInstance, IUnknown* pEventData) {}

				BEGIN_SINK_MAP(CUccCategoryInstanceEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccCategoryInstanceEvents), 0x00002774, OnCategoryInstanceValueModified, &CategoryInstanceValueModified)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO EntityViewAdded;
			extern _ATL_FUNC_INFO EntityViewRemoved;

			class CUccConferenceEntityViewCollectionEvents : public IDispEventSimpleImpl<1, CUccConferenceEntityViewCollectionEvents, &__uuidof(_IUccConferenceEntityViewCollectionEvents)>
			{
			public:
				virtual void __stdcall OnEntityViewAdded(IUccConferenceView* pConfInfo, IUccConferenceEntityViewCollectionEvent* pEntity) {}
				virtual void __stdcall OnEntityViewRemoved(IUccConferenceView* pConfInfo, IUccConferenceEntityViewCollectionEvent* pEntity) {}

				BEGIN_SINK_MAP(CUccConferenceEntityViewCollectionEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceEntityViewCollectionEvents), 0x00001388, OnEntityViewAdded, &EntityViewAdded)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceEntityViewCollectionEvents), 0x00001389, OnEntityViewRemoved, &EntityViewRemoved)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO PropertyUpdated;

			class CUccConferenceEntityViewEvents : public IDispEventSimpleImpl<1, CUccConferenceEntityViewEvents, &__uuidof(_IUccConferenceEntityViewEvents)>
			{
			public:
				virtual void __stdcall OnPropertyUpdated(IUccConferenceEntityView* pEventSource, IUccPropertyUpdateEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccConferenceEntityViewEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceEntityViewEvents), 0x000013ec, OnPropertyUpdated, &PropertyUpdated)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO ScheduleConference;
			extern _ATL_FUNC_INFO GetConference;
			extern _ATL_FUNC_INFO GetConferenceList;
			extern _ATL_FUNC_INFO ModifyConference;
			extern _ATL_FUNC_INFO DeleteConference;
			extern _ATL_FUNC_INFO GetAvailableMcuList;

			class CUccConferenceManagerSessionEvents : public IDispEventSimpleImpl<1, CUccConferenceManagerSessionEvents, &__uuidof(_IUccConferenceManagerSessionEvents)>
			{
			public:
				virtual void __stdcall OnScheduleConference(IUccConferenceManagerSession* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnGetConference(IUccConferenceManagerSession* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnGetConferenceList(IUccConferenceManagerSession* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnModifyConference(IUccConferenceManagerSession* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnDeleteConference(IUccConferenceManagerSession* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnGetAvailableMcuList(IUccConferenceManagerSession* pEventSource, IUccOperationProgressEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccConferenceManagerSessionEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceManagerSessionEvents), 0x00001450, OnScheduleConference, &ScheduleConference)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceManagerSessionEvents), 0x00001451, OnGetConference, &GetConference)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceManagerSessionEvents), 0x00001452, OnGetConferenceList, &GetConferenceList)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceManagerSessionEvents), 0x00001453, OnModifyConference, &ModifyConference)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceManagerSessionEvents), 0x00001454, OnDeleteConference, &DeleteConference)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceManagerSessionEvents), 0x00001455, OnGetAvailableMcuList, &GetAvailableMcuList)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO ChannelAdded;
			extern _ATL_FUNC_INFO ChannelRemoved;

			class CUccConferenceMediaChannelCollectionEvents : public IDispEventSimpleImpl<1, CUccConferenceMediaChannelCollectionEvents, &__uuidof(_IUccConferenceMediaChannelCollectionEvents)>
			{
			public:
				virtual void __stdcall OnChannelAdded(IUccConferenceSessionParticipantEndpoint* pEventSource, IUccMediaChannelCollectionEvent* pEventData) {}
				virtual void __stdcall OnChannelRemoved(IUccConferenceSessionParticipantEndpoint* pEventSource, IUccMediaChannelCollectionEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccConferenceMediaChannelCollectionEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceMediaChannelCollectionEvents), 0x000007d0, OnChannelAdded, &ChannelAdded)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceMediaChannelCollectionEvents), 0x000007d1, OnChannelRemoved, &ChannelRemoved)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO SetProperty;
			extern _ATL_FUNC_INFO PropertyUpdated;

			class CUccConferenceMediaChannelEvents : public IDispEventSimpleImpl<1, CUccConferenceMediaChannelEvents, &__uuidof(_IUccConferenceMediaChannelEvents)>
			{
			public:
				virtual void __stdcall OnSetProperty(IUccConferenceMediaChannel* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnPropertyUpdated(IUccConferenceMediaChannel* pEventSource, IUccPropertyUpdateEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccConferenceMediaChannelEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceMediaChannelEvents), 0x0000076d, OnSetProperty, &SetProperty)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceMediaChannelEvents), 0x0000076c, OnPropertyUpdated, &PropertyUpdated)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO Enter;
			extern _ATL_FUNC_INFO Leave;
			extern _ATL_FUNC_INFO SetProperty;
			extern _ATL_FUNC_INFO PropertyUpdated;

			class CUccConferenceSessionEvents : public IDispEventSimpleImpl<1, CUccConferenceSessionEvents, &__uuidof(_IUccConferenceSessionEvents)>
			{
			public:
				virtual void __stdcall OnEnter(IUccConferenceSession* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnLeave(IUccConferenceSession* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnSetProperty(IUccConferenceSession* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnPropertyUpdated(IUccConferenceSession* pEventSource, IUccPropertyUpdateEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccConferenceSessionEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionEvents), 0x00000640, OnEnter, &Enter)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionEvents), 0x00000641, OnLeave, &Leave)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionEvents), 0x00000642, OnSetProperty, &SetProperty)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionEvents), 0x00000644, OnPropertyUpdated, &PropertyUpdated)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO UpdateChannels;
			extern _ATL_FUNC_INFO StateChanged;
			extern _ATL_FUNC_INFO PropertyUpdated;
			extern _ATL_FUNC_INFO SetProperty;

			class CUccConferenceSessionParticipantEndpointEvents : public IDispEventSimpleImpl<1, CUccConferenceSessionParticipantEndpointEvents, &__uuidof(_IUccConferenceSessionParticipantEndpointEvents)>
			{
			public:
				virtual void __stdcall OnUpdateChannels(IUccConferenceSessionParticipantEndpoint* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnStateChanged(IUccConferenceSessionParticipantEndpoint* pEventSource, IUccConferenceSessionParticipantEndpointStateChangedEvent* pEventData) {}
				virtual void __stdcall OnPropertyUpdated(IUccConferenceSessionParticipantEndpoint* pEventSource, IUccPropertyUpdateEvent* pEventData) {}
				virtual void __stdcall OnSetProperty(IUccConferenceSessionParticipantEndpoint* pEventSource, IUccOperationProgressEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccConferenceSessionParticipantEndpointEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionParticipantEndpointEvents), 0x00000708, OnUpdateChannels, &UpdateChannels)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionParticipantEndpointEvents), 0x00000709, OnStateChanged, &StateChanged)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionParticipantEndpointEvents), 0x0000070a, OnPropertyUpdated, &PropertyUpdated)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionParticipantEndpointEvents), 0x0000070b, OnSetProperty, &SetProperty)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO SetProperty;
			extern _ATL_FUNC_INFO PropertyUpdated;
			extern _ATL_FUNC_INFO AddEndpoint;
			extern _ATL_FUNC_INFO RemoveEndpoint;

			class CUccConferenceSessionParticipantEvents : public IDispEventSimpleImpl<1, CUccConferenceSessionParticipantEvents, &__uuidof(_IUccConferenceSessionParticipantEvents)>
			{
			public:
				virtual void __stdcall OnSetProperty(IUccConferenceSessionParticipant* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnPropertyUpdated(IUccConferenceSessionParticipant* pEventSource, IUccPropertyUpdateEvent* pEventeData) {}
				virtual void __stdcall OnAddEndpoint(IUccConferenceSessionParticipant* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnRemoveEndpoint(IUccConferenceSessionParticipant* pEventSource, IUccOperationProgressEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccConferenceSessionParticipantEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionParticipantEvents), 0x000006a4, OnSetProperty, &SetProperty)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionParticipantEvents), 0x000006a5, OnPropertyUpdated, &PropertyUpdated)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionParticipantEvents), 0x000006a6, OnAddEndpoint, &AddEndpoint)
					SINK_ENTRY_INFO(1, __uuidof(_IUccConferenceSessionParticipantEvents), 0x000006a7, OnRemoveEndpoint, &RemoveEndpoint)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO NameChanged;
			extern _ATL_FUNC_INFO ExternalUriChanged;
			extern _ATL_FUNC_INFO AddedToGroup;
			extern _ATL_FUNC_INFO RemovedFromGroup;
			extern _ATL_FUNC_INFO ContactExtensionChanged;

			class CUccContactEvents : public IDispEventSimpleImpl<1, CUccContactEvents, &__uuidof(_IUccContactEvents)>
			{
			public:
				virtual void __stdcall OnNameChanged(IUccContact* pEventSource, IUnknown* pEventData) {}
				virtual void __stdcall OnExternalUriChanged(IUccContact* pEventSource, IUnknown* pEventData) {}
				virtual void __stdcall OnAddedToGroup(IUccContact* pEventSource, IUccGroupMembershipEvent* pEventData) {}
				virtual void __stdcall OnRemovedFromGroup(IUccContact* pEventSource, IUccGroupMembershipEvent* pEventData) {}
				virtual void __stdcall OnContactExtensionChanged(IUccContact* pEventSource, IUnknown* pEventData) {}

				BEGIN_SINK_MAP(CUccContactEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccContactEvents), 0x000029cc, OnNameChanged, &NameChanged)
					SINK_ENTRY_INFO(1, __uuidof(_IUccContactEvents), 0x000029cd, OnExternalUriChanged, &ExternalUriChanged)
					SINK_ENTRY_INFO(1, __uuidof(_IUccContactEvents), 0x000029ce, OnAddedToGroup, &AddedToGroup)
					SINK_ENTRY_INFO(1, __uuidof(_IUccContactEvents), 0x000029cf, OnRemovedFromGroup, &RemovedFromGroup)
					SINK_ENTRY_INFO(1, __uuidof(_IUccContactEvents), 0x000029d0, OnContactExtensionChanged, &ContactExtensionChanged)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO MemberAdded;
			extern _ATL_FUNC_INFO MemberRemoved;

			class CUccContainerEvents : public IDispEventSimpleImpl<1, CUccContainerEvents, &__uuidof(_IUccContainerEvents)>
			{
			public:
				virtual void __stdcall OnMemberAdded(IUccContainer* pContainer, IUccContainerMemberCollectionEvent* pEventData) {}
				virtual void __stdcall OnMemberRemoved(IUccContainer* pContainer, IUccContainerMemberCollectionEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccContainerEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccContainerEvents), 0x00002a94, OnMemberAdded, &MemberAdded)
					SINK_ENTRY_INFO(1, __uuidof(_IUccContainerEvents), 0x00002a95, OnMemberRemoved, &MemberRemoved)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO ContainerAdded;
			extern _ATL_FUNC_INFO ContainerRemoved;

			class CUccContainerMemberEvents : public IDispEventSimpleImpl<1, CUccContainerMemberEvents, &__uuidof(_IUccContainerMemberEvents)>
			{
			public:
				virtual void __stdcall OnContainerAdded(IUccContainerMember* pMember, IUccContainerMembershipEvent* pEvent) {}
				virtual void __stdcall OnContainerRemoved(IUccContainerMember* pMember, IUccContainerMembershipEvent* pEvent) {}

				BEGIN_SINK_MAP(CUccContainerMemberEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccContainerMemberEvents), 0x00002af8, OnContainerAdded, &ContainerAdded)
					SINK_ENTRY_INFO(1, __uuidof(_IUccContainerMemberEvents), 0x00002af9, OnContainerRemoved, &ContainerRemoved)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO Enable;
			extern _ATL_FUNC_INFO Disable;

			class CUccEndpointEvents : public IDispEventSimpleImpl<1, CUccEndpointEvents, &__uuidof(_IUccEndpointEvents)>
			{
			public:
				virtual HRESULT __stdcall OnEnable(IUccEndpoint* pEventSource, IUccOperationProgressEvent* pEventData) { return S_OK; }
				virtual HRESULT __stdcall OnDisable(IUccEndpoint* pEventSource, IUccOperationProgressEvent* pEventData) { return S_OK; }

				BEGIN_SINK_MAP(CUccEndpointEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccEndpointEvents), 0x000000c8, OnEnable, &Enable)
					SINK_ENTRY_INFO(1, __uuidof(_IUccEndpointEvents), 0x000000c9, OnDisable, &Disable)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO NameChanged;
			extern _ATL_FUNC_INFO ContactAdded;
			extern _ATL_FUNC_INFO ContactRemoved;
			extern _ATL_FUNC_INFO GroupExtensionChanged;

			class CUccGroupEvents : public IDispEventSimpleImpl<1, CUccGroupEvents, &__uuidof(_IUccGroupEvents)>
			{
			public:
				virtual void __stdcall OnNameChanged(IUccGroup* pEventSource, IUnknown* pEventData) {}
				virtual void __stdcall OnExternalUriChanged(IUccGroup* pEventSource, IUnknown* pEventData) {}
				virtual void __stdcall OnContactAdded(IUccGroup* pEventSource, IUccContactCollectionEvent* pEventData) {}
				virtual void __stdcall OnContactRemoved(IUccGroup* pEventSource, IUccContactCollectionEvent* pEventData) {}
				virtual void __stdcall OnGroupExtensionChanged(IUccGroup* pEventSource, IUnknown* pEventData) {}

				BEGIN_SINK_MAP(CUccGroupEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccGroupEvents), 0x00002a30, OnNameChanged, &NameChanged)
					SINK_ENTRY_INFO(1, __uuidof(_IUccGroupEvents), 0x00002a31, OnExternalUriChanged, &ExternalUriChanged)
					SINK_ENTRY_INFO(1, __uuidof(_IUccGroupEvents), 0x00002a32, OnContactAdded, &ContactAdded)
					SINK_ENTRY_INFO(1, __uuidof(_IUccGroupEvents), 0x00002a33, OnContactRemoved, &ContactRemoved)
					SINK_ENTRY_INFO(1, __uuidof(_IUccGroupEvents), 0x00002a34, OnGroupExtensionChanged, &GroupExtensionChanged)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO SendUCMessage;

			class CUccInstantMessagingSessionEvents : public IDispEventSimpleImpl<1, CUccInstantMessagingSessionEvents, &__uuidof(_IUccInstantMessagingSessionEvents)>
			{
			public:
				virtual void __stdcall OnSendMessage(IUccInstantMessagingSession* pEventSource, IUccSessionOperationEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccInstantMessagingSessionEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccInstantMessagingSessionEvents), 0x00000258, OnSendMessage, &SendUCMessage)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO InstantMessageReceived;
			extern _ATL_FUNC_INFO Composing;
			extern _ATL_FUNC_INFO Idle;

			class CUccInstantMessagingSessionParticipantEvents : public IDispEventSimpleImpl<1, CUccInstantMessagingSessionParticipantEvents, &__uuidof(_IUccInstantMessagingSessionParticipantEvents)>
			{
			public:
				virtual void __stdcall OnInstantMessageReceived(IUccInstantMessagingSessionParticipant* pEventSource, IUccIncomingInstantMessageEvent* pEventData) {}
				virtual void __stdcall OnComposing(IUccInstantMessagingSessionParticipant* pEventSource, IUccInstantMessagingComposingEvent* pEventData) {}
				virtual void __stdcall OnIdle(IUccInstantMessagingSessionParticipant* pEventSource, IUccInstantMessagingComposingEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccInstantMessagingSessionParticipantEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccInstantMessagingSessionParticipantEvents), 0x000002bc, OnInstantMessageReceived, &InstantMessageReceived)
					SINK_ENTRY_INFO(1, __uuidof(_IUccInstantMessagingSessionParticipantEvents), 0x000002bd, OnComposing, &Composing)
					SINK_ENTRY_INFO(1, __uuidof(_IUccInstantMessagingSessionParticipantEvents), 0x000002be, OnIdle, &Idle)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO ChannelAdded;
			extern _ATL_FUNC_INFO ChannelRemoved;

			class CUccMediaChannelCollectionEvents : public IDispEventSimpleImpl<1, CUccMediaChannelCollectionEvents, &__uuidof(_IUccMediaChannelCollectionEvents)>
			{
			public:
				virtual void __stdcall OnChannelAdded(IUccAudioVideoSessionParticipant* pEventSource, IUccMediaChannelCollectionEvent* pEventData) {}
				virtual void __stdcall OnChannelRemoved(IUccAudioVideoSessionParticipant* pEventSource, IUccMediaChannelCollectionEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccMediaChannelCollectionEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccMediaChannelCollectionEvents), 0x00000898, OnChannelAdded, &ChannelAdded)
					SINK_ENTRY_INFO(1, __uuidof(_IUccMediaChannelCollectionEvents), 0x00000899, OnChannelRemoved, &ChannelRemoved)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO MediaDeviceChanged;

			class CUccMediaChannelDevicesEvents : public IDispEventSimpleImpl<1, CUccMediaChannelDevicesEvents, &__uuidof(_IUccMediaChannelDevicesEvents)>
			{
			public:
				virtual void __stdcall OnMediaDeviceChanged(IUccMediaChannel* pEventSource, IUccMediaDeviceChangeEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccMediaChannelDevicesEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccMediaChannelDevicesEvents), 0x000004e2, OnMediaDeviceChanged, &MediaDeviceChanged)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO NegotiatedMediaChanged;

			class CUccMediaChannelEvents : public IDispEventSimpleImpl<1, CUccMediaChannelEvents, &__uuidof(_IUccMediaChannelEvents)>
			{
			public:
				virtual void __stdcall OnNegotiatedMediaChanged(IUccMediaChannel* pEventSource, IUccMediaChannelEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccMediaChannelEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccMediaChannelEvents), 0x00000515, OnNegotiatedMediaChanged, &NegotiatedMediaChanged)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO MediaDeviceAdded;
			extern _ATL_FUNC_INFO MediaDeviceRemoved;
			extern _ATL_FUNC_INFO RecommendedMediaDeviceChanged;
			extern _ATL_FUNC_INFO SelectedMediaDeviceChanged;

			class CUccMediaDeviceManagerEvents : public IDispEventSimpleImpl<1, CUccMediaDeviceManagerEvents, &__uuidof(_IUccMediaDeviceManagerEvents)>
			{
			public:
				virtual void __stdcall OnMediaDeviceAdded(IUccMediaDeviceManager* pEventSource, IUccMediaDeviceChangeEvent* pEventData) {}
				virtual void __stdcall OnMediaDeviceRemoved(IUccMediaDeviceManager* pEventSource, IUccMediaDeviceChangeEvent* pEventData) {}
				virtual void __stdcall OnRecommendedMediaDeviceChanged(IUccMediaDeviceManager* pEventSource, IUccMediaDeviceChangeEvent* pEventData) {}
				virtual void __stdcall OnSelectedMediaDeviceChanged(IUccMediaDeviceManager* pEventSource, IUccMediaDeviceChangeEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccMediaDeviceManagerEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccMediaDeviceManagerEvents), 0x000009c5, OnMediaDeviceAdded, &MediaDeviceAdded)
					SINK_ENTRY_INFO(1, __uuidof(_IUccMediaDeviceManagerEvents), 0x000009c6, OnMediaDeviceRemoved, &MediaDeviceRemoved)
					SINK_ENTRY_INFO(1, __uuidof(_IUccMediaDeviceManagerEvents), 0x000009c7, OnRecommendedMediaDeviceChanged, &RecommendedMediaDeviceChanged)
					SINK_ENTRY_INFO(1, __uuidof(_IUccMediaDeviceManagerEvents), 0x000009c8, OnSelectedMediaDeviceChanged, &SelectedMediaDeviceChanged)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO FindMediaConnectivityServers;

			class CUccMediaEndpointEvents : public IDispEventSimpleImpl<1, CUccMediaEndpointEvents, &__uuidof(_IUccMediaEndpointEvents)>
			{
			public:
				virtual void __stdcall OnFindMediaConnectivityServers(IUccMediaEndpointSettings* pEventSource, IUccFindMediaConnectivityServersEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccMediaEndpointEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccMediaEndpointEvents), 0x00000a8c, OnFindMediaConnectivityServers, &FindMediaConnectivityServers)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO CancelOperation;

			class CUccOperationManagerEvents : public IDispEventSimpleImpl<1, CUccOperationManagerEvents, &__uuidof(_IUccOperationManagerEvents)>
			{
			public:
				virtual void __stdcall OnCancelOperation(IUnknown* pEventSource, IUccOperationProgressEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccOperationManagerEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccOperationManagerEvents), 0x00002ee0, OnCancelOperation, &CancelOperation)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO Shutdown;
			extern _ATL_FUNC_INFO IpAddrChange;

			class CUccPlatformEvents : public IDispEventSimpleImpl<1, CUccPlatformEvents, &__uuidof(_IUccPlatformEvents)>
			{
			public:
				virtual void __stdcall OnShutdown(IUccPlatform* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnIpAddrChange(IUccPlatform* pEventSource, IUnknown* pEventData) {}

				BEGIN_SINK_MAP(CUccPlatformEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccPlatformEvents), 0x00000064, OnShutdown, &Shutdown)
					SINK_ENTRY_INFO(1, __uuidof(_IUccPlatformEvents), 0x00000065, OnIpAddrChange, &IpAddrChange)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO CategoryContextAdded;
			extern _ATL_FUNC_INFO CategoryContextRemoved;

			class CUccPresentityEvents : public IDispEventSimpleImpl<1, CUccPresentityEvents, &__uuidof(_IUccPresentityEvents)>
			{
			public:
				virtual void __stdcall OnCategoryContextAdded(IUccPresentity* pPresentity, IUccCategoryContextEvent* pCategoryCtxtEvent) {}
				virtual void __stdcall OnCategoryContextRemoved(IUccPresentity* pPresentity, IUccCategoryContextEvent* pCategoryCtxtEvent) {}

				BEGIN_SINK_MAP(CUccPresentityEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccPresentityEvents), 0x000028a0, OnCategoryContextAdded, &CategoryContextAdded)
					SINK_ENTRY_INFO(1, __uuidof(_IUccPresentityEvents), 0x000028a1, OnCategoryContextRemoved, &CategoryContextRemoved)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO Publish;

			class CUccPublicationEvent : public IDispEventSimpleImpl<1, CUccPublicationEvent, &__uuidof(_IUccPublicationEvent)>
			{
			public:
				virtual void __stdcall OnPublish(IUccPublication* pPublication, IUccOperationProgressEvent* pPublicationEventInfo) {}

				BEGIN_SINK_MAP(CUccPublicationEvent)
					SINK_ENTRY_INFO(1, __uuidof(_IUccPublicationEvent), 0x00002968, OnPublish, &Publish)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO PublicationRequired;

			class CUccPublicationManagerEvents : public IDispEventSimpleImpl<1, CUccPublicationManagerEvents, &__uuidof(_IUccPublicationManagerEvents)>
			{
			public:
				virtual void __stdcall OnPublicationRequired(IUccPublicationManager* pEventSource, IUnknown* pEventData) {}

				BEGIN_SINK_MAP(CUccPublicationManagerEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccPublicationManagerEvents), 0x00002710, OnPublicationRequired, &PublicationRequired)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO FindServer;

			class CUccServerSignalingSettingsEvents : public IDispEventSimpleImpl<1, CUccServerSignalingSettingsEvents, &__uuidof(_IUccServerSignalingSettingsEvents)>
			{
			public:
				virtual void __stdcall OnFindServer(IUccEndpoint* pEventSource, IUccFindServerEvent* pFindServerEventData) {}

				BEGIN_SINK_MAP(CUccServerSignalingSettingsEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccServerSignalingSettingsEvents), 0x000004b0, OnFindServer, &FindServer)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO TransferProgress;
			extern _ATL_FUNC_INFO Alternate;
			extern _ATL_FUNC_INFO IncomingTransfer;

			class CUccSessionCallControlEvents : public IDispEventSimpleImpl<1, CUccSessionCallControlEvents, &__uuidof(_IUccSessionCallControlEvents)>
			{
			public:
				virtual void __stdcall OnTransferProgress(IUccSession* pEventSource, IUccSessionTransferProgressEvent* pEventData) {}
				virtual void __stdcall OnAlternate(IUccSession* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnIncomingTransfer(IUccSession* pEventSource, IUccIncomingSessionTransferEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccSessionCallControlEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionCallControlEvents), 0x00000961, OnTransferProgress, &TransferProgress)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionCallControlEvents), 0x00000962, OnAlternate, &Alternate)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionCallControlEvents), 0x00000963, OnIncomingTransfer, &IncomingTransfer)
				END_SINK_MAP()
			};

			//extern _ATL_FUNC_INFO TransferProgress;
			//extern _ATL_FUNC_INFO Alternate;
			//extern _ATL_FUNC_INFO IncomingTransfer;

			//class CUccSessionDescriptionEvaluatorEvents : public IDispEventSimpleImpl<1 , CUccSessionDescriptionEvaluatorEvents , &__uuidof(_IUccSessionDescriptionEvaluator)>
			//{
			//public:
			//	virtual void __stdcall Evaluate (
			//		/*[in]*/ BSTR bstrContentType,
			//		/*[in]*/ BSTR bstrSessionDescription,
			//		/*[out,retval]*/ VARIANT_BOOL * pbIsApplicationSession ) = 0;
			//	virtual void __stdcall OnTransferProgress(IUccSession* pEventSource , IUccSessionTransferProgressEvent* pEventData){}
			//	virtual void __stdcall OnAlternate(IUccSession* pEventSource , IUccOperationProgressEvent* pEventData){}
			//	virtual void __stdcall OnIncomingTransfer(IUccSession* pEventSource , IUccIncomingSessionTransferEvent* pEventData){}

			//	BEGIN_SINK_MAP(CUccSessionDescriptionEvaluatorEvents)
			//		SINK_ENTRY_INFO(1 , __uuidof(_IUccSessionCallControlEvents) , 0x00000961 , OnTransferProgress , &TransferProgress)
			//		SINK_ENTRY_INFO(1 , __uuidof(_IUccSessionCallControlEvents) , 0x00000962 , OnAlternate , &Alternate)
			//		SINK_ENTRY_INFO(1 , __uuidof(_IUccSessionCallControlEvents) , 0x00000963 , OnIncomingTransfer , &IncomingTransfer)
			//	END_SINK_MAP()
			//};

			extern _ATL_FUNC_INFO AddParticipant;
			extern _ATL_FUNC_INFO RemoveParticipant;
			extern _ATL_FUNC_INFO Terminate;

			class CUccSessionEvents : public IDispEventSimpleImpl<1, CUccSessionEvents, &__uuidof(_IUccSessionEvents)>
			{
			public:
				virtual void __stdcall OnAddParticipant(IUccSession* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnRemoveParticipant(IUccSession* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnTerminate(IUccSession* pEventSource, IUccOperationProgressEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccSessionEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionEvents), 0x00000190, OnAddParticipant, &AddParticipant)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionEvents), 0x00000191, OnRemoveParticipant, &RemoveParticipant)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionEvents), 0x00000194, OnTerminate, &Terminate)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO IncomingSession;
			extern _ATL_FUNC_INFO OutgoingSession;

			class CUccSessionManagerEvents : public IDispEventSimpleImpl<1, CUccSessionManagerEvents, &__uuidof(_IUccSessionManagerEvents)>
			{
			public:
				virtual HRESULT __stdcall OnIncomingSession(IUccEndpoint* pEventSource, IUccIncomingSessionEvent* pEventData) { return S_OK; }
				virtual HRESULT __stdcall OnOutgoingSession(IUccEndpoint* pEventSource, IUccOutgoingSessionEvent* pEventData) { return S_OK; }

				BEGIN_SINK_MAP(CUccSessionManagerEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionManagerEvents), 0x0000012c, OnIncomingSession, &IncomingSession)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionManagerEvents), 0x0000012d, OnOutgoingSession, &OutgoingSession)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO ParticipantAdded;
			extern _ATL_FUNC_INFO ParticipantRemoved;

			class CUccSessionParticipantCollectionEvents : public IDispEventSimpleImpl<1, CUccSessionParticipantCollectionEvents, &__uuidof(_IUccSessionParticipantCollectionEvents)>
			{
			public:
				virtual void __stdcall OnParticipantAdded(IUccSession* pEventSource, IUccSessionParticipantCollectionEvent* pEventData) {}
				virtual void __stdcall OnParticipantRemoved(IUccSession* pEventSource, IUccSessionParticipantCollectionEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccSessionParticipantCollectionEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionParticipantCollectionEvents), 0x00000834, OnParticipantAdded, &ParticipantAdded)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionParticipantCollectionEvents), 0x00000835, OnParticipantRemoved, &ParticipantRemoved)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO EndpointAdded;
			extern _ATL_FUNC_INFO EndpointRemoved;

			class CUccSessionParticipantEndpointCollectionEvents : public IDispEventSimpleImpl<1, CUccSessionParticipantEndpointCollectionEvents, &__uuidof(_IUccSessionParticipantEndpointCollectionEvents)>
			{
			public:
				virtual void __stdcall OnEndpointAdded(IUccSessionParticipant* pEventSource, IUccSessionParticipantEndpointCollectionEvent* pEventData) {}
				virtual void __stdcall OnEndpointRemoved(IUccSessionParticipant* pEventSource, IUccSessionParticipantEndpointCollectionEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccSessionParticipantEndpointCollectionEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionParticipantEndpointCollectionEvents), 0x000008fc, OnEndpointAdded, &EndpointAdded)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionParticipantEndpointCollectionEvents), 0x000008fd, OnEndpointRemoved, &EndpointRemoved)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO StateChanged;
			extern _ATL_FUNC_INFO AddParticipantEndpoint;
			extern _ATL_FUNC_INFO RemoveParticipantEndpoint;

			class CUccSessionParticipantEvents : public IDispEventSimpleImpl<1, CUccSessionParticipantEvents, &__uuidof(_IUccSessionParticipantEvents)>
			{
			public:
				virtual void __stdcall OnStateChanged(IUccSessionParticipant* pEventSource, IUccSessionParticipantStateChangedEvent* pEventData) {}
				virtual void __stdcall OnAddParticipantEndpoint(IUccSessionParticipant* pEventSource, IUccOperationProgressEvent* pEventData) {}
				virtual void __stdcall OnRemoveParticipantEndpoint(IUccSessionParticipant* pEventSource, IUccOperationProgressEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccSessionParticipantEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionParticipantEvents), 0x000001f4, OnStateChanged, &StateChanged)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionParticipantEvents), 0x000001f5, OnAddParticipantEndpoint, &AddParticipantEndpoint)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSessionParticipantEvents), 0x000001f6, OnRemoveParticipantEndpoint, &RemoveParticipantEndpoint)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO IncomingMessage;
			extern _ATL_FUNC_INFO SendRequest;

			class CUccSignalingChannelEvents : public IDispEventSimpleImpl<1, CUccSignalingChannelEvents, &__uuidof(_IUccSignalingChannelEvents)>
			{
			public:
				virtual void __stdcall OnIncomingMessage(IUccSignalingChannel* pEventSource, IUccIncomingSignalingMessageEvent* pEventData) {}
				virtual void __stdcall OnSendRequest(IUccSignalingChannel* pEventSource, IUccOperationProgressEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccSignalingChannelEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSignalingChannelEvents), 0x00000a29, OnIncomingMessage, &IncomingMessage)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSignalingChannelEvents), 0x00000a28, OnSendRequest, &SendRequest)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO Subscribe;
			extern _ATL_FUNC_INFO Unsubscribe;
			extern _ATL_FUNC_INFO Query;

			class CUccSubscriptionEvents : public IDispEventSimpleImpl<1, CUccSubscriptionEvents, &__uuidof(_IUccSubscriptionEvents)>
			{
			public:
				virtual void __stdcall OnSubscribe(IUccSubscription* pSubscription, IUccSubscriptionEvent* pEventInfo) {}
				virtual void __stdcall OnUnsubscribe(IUccSubscription* pSubscription, IUccSubscriptionEvent* pEventInfo) {}
				virtual void __stdcall OnQuery(IUccSubscription* pSubscription, IUccSubscriptionEvent* pEventInfo) {}

				BEGIN_SINK_MAP(CUccSubscriptionEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSubscriptionEvents), 0x0000283c, OnSubscribe, &Subscribe)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSubscriptionEvents), 0x0000283d, OnUnsubscribe, &Unsubscribe)
					SINK_ENTRY_INFO(1, __uuidof(_IUccSubscriptionEvents), 0x0000283e, OnQuery, &Query)
				END_SINK_MAP()
			};

			extern _ATL_FUNC_INFO Execute;

			class CUccUserSearchQueryEvents : public IDispEventSimpleImpl<1, CUccUserSearchQueryEvents, &__uuidof(_IUccUserSearchQueryEvents)>
			{
			public:
				virtual void __stdcall OnExecute(IUccUserSearchQuery* pEventSource, IUccUserSearchQueryEvent* pEventData) {}

				BEGIN_SINK_MAP(CUccUserSearchQueryEvents)
					SINK_ENTRY_INFO(1, __uuidof(_IUccUserSearchQueryEvents), 0x000032c8, OnExecute, &Execute)
				END_SINK_MAP()
			};
		}
	}
}