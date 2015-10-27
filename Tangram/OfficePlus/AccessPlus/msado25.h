﻿// Created by Microsoft (R) C/C++ Compiler Version 15.00.21022.08 (71a271ae).
// C++ source equivalent of Win32 type library C:\Program Files\Common Files\System\ado\msado25.tlb
// compiler-generated file created 01/01/10 at 00:14:59 - DO NOT EDIT!

#pragma once
#pragma pack(push, 8)

#include <comdef.h>

namespace ADODB {

//
// Forward references and typedefs
//

struct __declspec(uuid("00000205-0000-0010-8000-00aa006d2ea4"))
/* LIBID */ __ADODB;
enum CursorTypeEnum;
enum CursorOptionEnum;
enum LockTypeEnum;
enum ExecuteOptionEnum;
enum ConnectOptionEnum;
enum ObjectStateEnum;
enum CursorLocationEnum;
enum DataTypeEnum;
enum FieldAttributeEnum;
enum EditModeEnum;
enum RecordStatusEnum;
enum GetRowsOptionEnum;
enum PositionEnum;
enum BookmarkEnum;
enum MarshalOptionsEnum;
enum AffectEnum;
enum ResyncEnum;
enum CompareEnum;
enum FilterGroupEnum;
enum SearchDirectionEnum;
enum PersistFormatEnum;
enum StringFormatEnum;
enum ConnectPromptEnum;
enum ConnectModeEnum;
enum RecordCreateOptionsEnum;
enum RecordOpenOptionsEnum;
enum IsolationLevelEnum;
enum XactAttributeEnum;
enum PropertyAttributesEnum;
enum ErrorValueEnum;
enum ParameterAttributesEnum;
enum ParameterDirectionEnum;
enum CommandTypeEnum;
enum EventStatusEnum;
enum EventReasonEnum;
enum SchemaEnum;
enum FieldStatusEnum;
enum SeekEnum;
enum ADCPROP_UPDATECRITERIA_ENUM;
enum ADCPROP_ASYNCTHREADPRIORITY_ENUM;
enum ADCPROP_AUTORECALC_ENUM;
enum ADCPROP_UPDATERESYNC_ENUM;
enum MoveRecordOptionsEnum;
enum CopyRecordOptionsEnum;
enum StreamTypeEnum;
enum LineSeparatorEnum;
enum StreamOpenOptionsEnum;
enum StreamWriteEnum;
enum SaveOptionsEnum;
enum FieldEnum;
enum StreamReadEnum;
enum RecordTypeEnum;
struct __declspec(uuid("00000512-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ _Collection;
struct __declspec(uuid("00000513-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ _DynaCollection;
struct __declspec(uuid("00000534-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ _ADO;
struct __declspec(uuid("00000504-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Properties;
struct __declspec(uuid("00000503-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Property;
struct __declspec(uuid("00000500-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Error;
struct __declspec(uuid("00000501-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Errors;
struct __declspec(uuid("00000508-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Command15;
struct __declspec(uuid("00000550-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ _Connection;
struct __declspec(uuid("00000515-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Connection15;
struct __declspec(uuid("00000556-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ _Recordset;
struct __declspec(uuid("00000555-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Recordset21;
struct __declspec(uuid("0000054f-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Recordset20;
struct __declspec(uuid("0000050e-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Recordset15;
struct __declspec(uuid("00000564-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Fields;
struct __declspec(uuid("0000054d-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Fields20;
struct __declspec(uuid("00000506-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Fields15;
struct __declspec(uuid("00000569-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Field;
struct __declspec(uuid("0000054c-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Field20;
struct __declspec(uuid("0000050c-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ _Parameter;
struct __declspec(uuid("0000050d-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Parameters;
struct __declspec(uuid("0000054e-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ _Command;
struct __declspec(uuid("00000402-0000-0010-8000-00aa006d2ea4"))
/* interface */ ConnectionEventsVt;
struct __declspec(uuid("00000403-0000-0010-8000-00aa006d2ea4"))
/* interface */ RecordsetEventsVt;
struct __declspec(uuid("00000400-0000-0010-8000-00aa006d2ea4"))
/* dispinterface */ ConnectionEvents;
struct __declspec(uuid("00000266-0000-0010-8000-00aa006d2ea4"))
/* dispinterface */ RecordsetEvents;
struct __declspec(uuid("00000516-0000-0010-8000-00aa006d2ea4"))
/* interface */ ADOConnectionConstruction15;
struct __declspec(uuid("00000551-0000-0010-8000-00aa006d2ea4"))
/* interface */ ADOConnectionConstruction;
struct /* coclass */ Connection;
struct __declspec(uuid("00000562-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ _Record;
struct /* coclass */ Record;
struct __declspec(uuid("00000563-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ IRecFields;
struct __declspec(uuid("00000565-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ _Stream;
struct /* coclass */ Stream;
struct __declspec(uuid("00000567-0000-0010-8000-00aa006d2ea4"))
/* interface */ ADORecordConstruction;
struct __declspec(uuid("00000568-0000-0010-8000-00aa006d2ea4"))
/* interface */ ADOStreamConstruction;
struct __declspec(uuid("00000517-0000-0010-8000-00aa006d2ea4"))
/* interface */ ADOCommandConstruction;
struct /* coclass */ Command;
struct /* coclass */ Recordset;
struct __declspec(uuid("00000283-0000-0010-8000-00aa006d2ea4"))
/* interface */ ADORecordsetConstruction;
struct __declspec(uuid("00000505-0000-0010-8000-00aa006d2ea4"))
/* dual interface */ Field15;
struct /* coclass */ Parameter;
typedef enum SearchDirectionEnum SearchDirection;

//
// Smart pointer typedef declarations
//

_COM_SMARTPTR_TYPEDEF(_Collection, __uuidof(_Collection));
_COM_SMARTPTR_TYPEDEF(_DynaCollection, __uuidof(_DynaCollection));
_COM_SMARTPTR_TYPEDEF(Property, __uuidof(Property));
_COM_SMARTPTR_TYPEDEF(Properties, __uuidof(Properties));
_COM_SMARTPTR_TYPEDEF(_ADO, __uuidof(_ADO));
_COM_SMARTPTR_TYPEDEF(Error, __uuidof(Error));
_COM_SMARTPTR_TYPEDEF(Errors, __uuidof(Errors));
_COM_SMARTPTR_TYPEDEF(Field20, __uuidof(Field20));
_COM_SMARTPTR_TYPEDEF(Field, __uuidof(Field));
_COM_SMARTPTR_TYPEDEF(Fields15, __uuidof(Fields15));
_COM_SMARTPTR_TYPEDEF(Fields20, __uuidof(Fields20));
_COM_SMARTPTR_TYPEDEF(Fields, __uuidof(Fields));
_COM_SMARTPTR_TYPEDEF(_Parameter, __uuidof(_Parameter));
_COM_SMARTPTR_TYPEDEF(Parameters, __uuidof(Parameters));
_COM_SMARTPTR_TYPEDEF(ConnectionEvents, __uuidof(ConnectionEvents));
_COM_SMARTPTR_TYPEDEF(RecordsetEvents, __uuidof(RecordsetEvents));
_COM_SMARTPTR_TYPEDEF(ADOConnectionConstruction15, __uuidof(ADOConnectionConstruction15));
_COM_SMARTPTR_TYPEDEF(ADOConnectionConstruction, __uuidof(ADOConnectionConstruction));
_COM_SMARTPTR_TYPEDEF(IRecFields, __uuidof(IRecFields));
_COM_SMARTPTR_TYPEDEF(_Stream, __uuidof(_Stream));
_COM_SMARTPTR_TYPEDEF(ADORecordConstruction, __uuidof(ADORecordConstruction));
_COM_SMARTPTR_TYPEDEF(ADOStreamConstruction, __uuidof(ADOStreamConstruction));
_COM_SMARTPTR_TYPEDEF(ADOCommandConstruction, __uuidof(ADOCommandConstruction));
_COM_SMARTPTR_TYPEDEF(ADORecordsetConstruction, __uuidof(ADORecordsetConstruction));
_COM_SMARTPTR_TYPEDEF(Field15, __uuidof(Field15));
_COM_SMARTPTR_TYPEDEF(Command15, __uuidof(Command15));
_COM_SMARTPTR_TYPEDEF(_Command, __uuidof(_Command));
_COM_SMARTPTR_TYPEDEF(Connection15, __uuidof(Connection15));
_COM_SMARTPTR_TYPEDEF(_Connection, __uuidof(_Connection));
_COM_SMARTPTR_TYPEDEF(Recordset15, __uuidof(Recordset15));
_COM_SMARTPTR_TYPEDEF(Recordset20, __uuidof(Recordset20));
_COM_SMARTPTR_TYPEDEF(Recordset21, __uuidof(Recordset21));
_COM_SMARTPTR_TYPEDEF(_Recordset, __uuidof(_Recordset));
_COM_SMARTPTR_TYPEDEF(ConnectionEventsVt, __uuidof(ConnectionEventsVt));
_COM_SMARTPTR_TYPEDEF(RecordsetEventsVt, __uuidof(RecordsetEventsVt));
_COM_SMARTPTR_TYPEDEF(_Record, __uuidof(_Record));

//
// Type library items
//

enum __declspec(uuid("0000051b-0000-0010-8000-00aa006d2ea4"))
CursorTypeEnum
{
    adOpenUnspecified = -1,
    adOpenForwardOnly = 0,
    adOpenKeyset = 1,
    adOpenDynamic = 2,
    adOpenStatic = 3
};

enum __declspec(uuid("0000051c-0000-0010-8000-00aa006d2ea4"))
CursorOptionEnum
{
    adHoldRecords = 256,
    adMovePrevious = 512,
    adAddNew = 16778240,
    adDelete = 16779264,
    adUpdate = 16809984,
    adBookmark = 8192,
    adApproxPosition = 16384,
    adUpdateBatch = 65536,
    adResync = 131072,
    adNotify = 262144,
    adFind = 524288,
    adSeek = 4194304,
    adIndex = 8388608
};

enum __declspec(uuid("0000051d-0000-0010-8000-00aa006d2ea4"))
LockTypeEnum
{
    adLockUnspecified = -1,
    adLockReadOnly = 1,
    adLockPessimistic = 2,
    adLockOptimistic = 3,
    adLockBatchOptimistic = 4
};

enum __declspec(uuid("0000051e-0000-0010-8000-00aa006d2ea4"))
ExecuteOptionEnum
{
    adOptionUnspecified = -1,
    adAsyncExecute = 16,
    adAsyncFetch = 32,
    adAsyncFetchNonBlocking = 64,
    adExecuteNoRecords = 128
};

enum __declspec(uuid("00000541-0000-0010-8000-00aa006d2ea4"))
ConnectOptionEnum
{
    adConnectUnspecified = -1,
    adAsyncConnect = 16
};

enum __declspec(uuid("00000532-0000-0010-8000-00aa006d2ea4"))
ObjectStateEnum
{
    adStateClosed = 0,
    adStateOpen = 1,
    adStateConnecting = 2,
    adStateExecuting = 4,
    adStateFetching = 8
};

enum __declspec(uuid("0000052f-0000-0010-8000-00aa006d2ea4"))
CursorLocationEnum
{
    adUseNone = 1,
    adUseServer = 2,
    adUseClient = 3,
    adUseClientBatch = 3
};

enum __declspec(uuid("0000051f-0000-0010-8000-00aa006d2ea4"))
DataTypeEnum
{
    adEmpty = 0,
    adTinyInt = 16,
    adSmallInt = 2,
    adInteger = 3,
    adBigInt = 20,
    adUnsignedTinyInt = 17,
    adUnsignedSmallInt = 18,
    adUnsignedInt = 19,
    adUnsignedBigInt = 21,
    adSingle = 4,
    adDouble = 5,
    adCurrency = 6,
    adDecimal = 14,
    adNumeric = 131,
    adBoolean = 11,
    adError = 10,
    adUserDefined = 132,
    adVariant = 12,
    adIDispatch = 9,
    adIUnknown = 13,
    adGUID = 72,
    adDate = 7,
    adDBDate = 133,
    adDBTime = 134,
    adDBTimeStamp = 135,
    adBSTR = 8,
    adChar = 129,
    adVarChar = 200,
    adLongVarChar = 201,
    adWChar = 130,
    adVarWChar = 202,
    adLongVarWChar = 203,
    adBinary = 128,
    adVarBinary = 204,
    adLongVarBinary = 205,
    adChapter = 136,
    adFileTime = 64,
    adPropVariant = 138,
    adVarNumeric = 139,
    adArray = 8192
};

enum __declspec(uuid("00000525-0000-0010-8000-00aa006d2ea4"))
FieldAttributeEnum
{
    adFldUnspecified = -1,
    adFldMayDefer = 2,
    adFldUpdatable = 4,
    adFldUnknownUpdatable = 8,
    adFldFixed = 16,
    adFldIsNullable = 32,
    adFldMayBeNull = 64,
    adFldLong = 128,
    adFldRowID = 256,
    adFldRowVersion = 512,
    adFldCacheDeferred = 4096,
    adFldIsChapter = 8192,
    adFldNegativeScale = 16384,
    adFldKeyColumn = 32768,
    adFldIsRowURL = 65536,
    adFldIsDefaultStream = 131072,
    adFldIsCollection = 262144
};

enum __declspec(uuid("00000526-0000-0010-8000-00aa006d2ea4"))
EditModeEnum
{
    adEditNone = 0,
    adEditInProgress = 1,
    adEditAdd = 2,
    adEditDelete = 4
};

enum __declspec(uuid("00000527-0000-0010-8000-00aa006d2ea4"))
RecordStatusEnum
{
    adRecOK = 0,
    adRecNew = 1,
    adRecModified = 2,
    adRecDeleted = 4,
    adRecUnmodified = 8,
    adRecInvalid = 16,
    adRecMultipleChanges = 64,
    adRecPendingChanges = 128,
    adRecCanceled = 256,
    adRecCantRelease = 1024,
    adRecConcurrencyViolation = 2048,
    adRecIntegrityViolation = 4096,
    adRecMaxChangesExceeded = 8192,
    adRecObjectOpen = 16384,
    adRecOutOfMemory = 32768,
    adRecPermissionDenied = 65536,
    adRecSchemaViolation = 131072,
    adRecDBDeleted = 262144
};

enum __declspec(uuid("00000542-0000-0010-8000-00aa006d2ea4"))
GetRowsOptionEnum
{
    adGetRowsRest = -1
};

enum __declspec(uuid("00000528-0000-0010-8000-00aa006d2ea4"))
PositionEnum
{
    adPosUnknown = -1,
    adPosBOF = -2,
    adPosEOF = -3
};

enum BookmarkEnum
{
    adBookmarkCurrent = 0,
    adBookmarkFirst = 1,
    adBookmarkLast = 2
};

enum __declspec(uuid("00000540-0000-0010-8000-00aa006d2ea4"))
MarshalOptionsEnum
{
    adMarshalAll = 0,
    adMarshalModifiedOnly = 1
};

enum __declspec(uuid("00000543-0000-0010-8000-00aa006d2ea4"))
AffectEnum
{
    adAffectCurrent = 1,
    adAffectGroup = 2,
    adAffectAll = 3,
    adAffectAllChapters = 4
};

enum __declspec(uuid("00000544-0000-0010-8000-00aa006d2ea4"))
ResyncEnum
{
    adResyncUnderlyingValues = 1,
    adResyncAllValues = 2
};

enum __declspec(uuid("00000545-0000-0010-8000-00aa006d2ea4"))
CompareEnum
{
    adCompareLessThan = 0,
    adCompareEqual = 1,
    adCompareGreaterThan = 2,
    adCompareNotEqual = 3,
    adCompareNotComparable = 4
};

enum __declspec(uuid("00000546-0000-0010-8000-00aa006d2ea4"))
FilterGroupEnum
{
    adFilterNone = 0,
    adFilterPendingRecords = 1,
    adFilterAffectedRecords = 2,
    adFilterFetchedRecords = 3,
    adFilterPredicate = 4,
    adFilterConflictingRecords = 5
};

enum __declspec(uuid("00000547-0000-0010-8000-00aa006d2ea4"))
SearchDirectionEnum
{
    adSearchForward = 1,
    adSearchBackward = -1
};

enum __declspec(uuid("00000548-0000-0010-8000-00aa006d2ea4"))
PersistFormatEnum
{
    adPersistADTG = 0,
    adPersistXML = 1
};

enum __declspec(uuid("00000549-0000-0010-8000-00aa006d2ea4"))
StringFormatEnum
{
    adClipString = 2
};

enum __declspec(uuid("00000520-0000-0010-8000-00aa006d2ea4"))
ConnectPromptEnum
{
    adPromptAlways = 1,
    adPromptComplete = 2,
    adPromptCompleteRequired = 3,
    adPromptNever = 4
};

enum __declspec(uuid("00000521-0000-0010-8000-00aa006d2ea4"))
ConnectModeEnum
{
    adModeUnknown = 0,
    adModeRead = 1,
    adModeWrite = 2,
    adModeReadWrite = 3,
    adModeShareDenyRead = 4,
    adModeShareDenyWrite = 8,
    adModeShareExclusive = 12,
    adModeShareDenyNone = 16,
    adModeRecursive = 4194304
};

enum __declspec(uuid("00000570-0000-0010-8000-00aa006d2ea4"))
RecordCreateOptionsEnum
{
    adCreateCollection = 8192,
    adCreateStructDoc = 0x80000000,
    adCreateNonCollection = 0,
    adOpenIfExists = 33554432,
    adCreateOverwrite = 67108864,
    adFailIfNotExists = -1
};

enum __declspec(uuid("00000571-0000-0010-8000-00aa006d2ea4"))
RecordOpenOptionsEnum
{
    adOpenRecordUnspecified = -1,
    adOpenSource = 8388608,
    adOpenAsync = 4096,
    adDelayFetchStream = 16384,
    adDelayFetchFields = 32768
};

enum __declspec(uuid("00000523-0000-0010-8000-00aa006d2ea4"))
IsolationLevelEnum
{
    adXactUnspecified = -1,
    adXactChaos = 16,
    adXactReadUncommitted = 256,
    adXactBrowse = 256,
    adXactCursorStability = 4096,
    adXactReadCommitted = 4096,
    adXactRepeatableRead = 65536,
    adXactSerializable = 1048576,
    adXactIsolated = 1048576
};

enum __declspec(uuid("00000524-0000-0010-8000-00aa006d2ea4"))
XactAttributeEnum
{
    adXactCommitRetaining = 131072,
    adXactAbortRetaining = 262144,
    adXactAsyncPhaseOne = 524288,
    adXactSyncPhaseOne = 1048576
};

enum __declspec(uuid("00000529-0000-0010-8000-00aa006d2ea4"))
PropertyAttributesEnum
{
    adPropNotSupported = 0,
    adPropRequired = 1,
    adPropOptional = 2,
    adPropRead = 512,
    adPropWrite = 1024
};

enum __declspec(uuid("0000052a-0000-0010-8000-00aa006d2ea4"))
ErrorValueEnum
{
    adErrProviderFailed = 3000,
    adErrInvalidArgument = 3001,
    adErrOpeningFile = 3002,
    adErrReadFile = 3003,
    adErrWriteFile = 3004,
    adErrNoCurrentRecord = 3021,
    adErrIllegalOperation = 3219,
    adErrCantChangeProvider = 3220,
    adErrInTransaction = 3246,
    adErrFeatureNotAvailable = 3251,
    adErrItemNotFound = 3265,
    adErrObjectInCollection = 3367,
    adErrObjectNotSet = 3420,
    adErrDataConversion = 3421,
    adErrObjectClosed = 3704,
    adErrObjectOpen = 3705,
    adErrProviderNotFound = 3706,
    adErrBoundToCommand = 3707,
    adErrInvalidParamInfo = 3708,
    adErrInvalidConnection = 3709,
    adErrNotReentrant = 3710,
    adErrStillExecuting = 3711,
    adErrOperationCancelled = 3712,
    adErrStillConnecting = 3713,
    adErrInvalidTransaction = 3714,
    adErrNotExecuting = 3715,
    adErrUnsafeOperation = 3716,
    adwrnSecurityDialog = 3717,
    adwrnSecurityDialogHeader = 3718,
    adErrIntegrityViolation = 3719,
    adErrPermissionDenied = 3720,
    adErrDataOverflow = 3721,
    adErrSchemaViolation = 3722,
    adErrSignMismatch = 3723,
    adErrCantConvertvalue = 3724,
    adErrCantCreate = 3725,
    adErrColumnNotOnThisRow = 3726,
    adErrURLDoesNotExist = 3727,
    adErrTreePermissionDenied = 3728,
    adErrInvalidURL = 3729,
    adErrResourceLocked = 3730,
    adErrResourceExists = 3731,
    adErrCannotComplete = 3732,
    adErrVolumeNotFound = 3733,
    adErrOutOfSpace = 3734,
    adErrResourceOutOfScope = 3735,
    adErrUnavailable = 3736,
    adErrURLNamedRowDoesNotExist = 3737,
    adErrDelResOutOfScope = 3738,
    adErrPropInvalidColumn = 3739,
    adErrPropInvalidOption = 3740,
    adErrPropInvalidValue = 3741,
    adErrPropConflicting = 3742,
    adErrPropNotAllSettable = 3743,
    adErrPropNotSet = 3744,
    adErrPropNotSettable = 3745,
    adErrPropNotSupported = 3746,
    adErrCatalogNotSet = 3747,
    adErrCantChangeConnection = 3748,
    adErrFieldsUpdateFailed = 3749,
    adErrDenyNotSupported = 3750,
    adErrDenyTypeNotSupported = 3751
};

enum __declspec(uuid("0000052b-0000-0010-8000-00aa006d2ea4"))
ParameterAttributesEnum
{
    adParamSigned = 16,
    adParamNullable = 64,
    adParamLong = 128
};

enum __declspec(uuid("0000052c-0000-0010-8000-00aa006d2ea4"))
ParameterDirectionEnum
{
    adParamUnknown = 0,
    adParamInput = 1,
    adParamOutput = 2,
    adParamInputOutput = 3,
    adParamReturnValue = 4
};

enum __declspec(uuid("0000052e-0000-0010-8000-00aa006d2ea4"))
CommandTypeEnum
{
    adCmdUnspecified = -1,
    adCmdUnknown = 8,
    adCmdText = 1,
    adCmdTable = 2,
    adCmdStoredProc = 4,
    adCmdFile = 256,
    adCmdTableDirect = 512
};

enum __declspec(uuid("00000530-0000-0010-8000-00aa006d2ea4"))
EventStatusEnum
{
    adStatusOK = 1,
    adStatusErrorsOccurred = 2,
    adStatusCantDeny = 3,
    adStatusCancel = 4,
    adStatusUnwantedEvent = 5
};

enum __declspec(uuid("00000531-0000-0010-8000-00aa006d2ea4"))
EventReasonEnum
{
    adRsnAddNew = 1,
    adRsnDelete = 2,
    adRsnUpdate = 3,
    adRsnUndoUpdate = 4,
    adRsnUndoAddNew = 5,
    adRsnUndoDelete = 6,
    adRsnRequery = 7,
    adRsnResynch = 8,
    adRsnClose = 9,
    adRsnMove = 10,
    adRsnFirstChange = 11,
    adRsnMoveFirst = 12,
    adRsnMoveNext = 13,
    adRsnMovePrevious = 14,
    adRsnMoveLast = 15
};

enum __declspec(uuid("00000533-0000-0010-8000-00aa006d2ea4"))
SchemaEnum
{
    adSchemaProviderSpecific = -1,
    adSchemaAsserts = 0,
    adSchemaCatalogs = 1,
    adSchemaCharacterSets = 2,
    adSchemaCollations = 3,
    adSchemaColumns = 4,
    adSchemaCheckConstraints = 5,
    adSchemaConstraintColumnUsage = 6,
    adSchemaConstraintTableUsage = 7,
    adSchemaKeyColumnUsage = 8,
    adSchemaReferentialContraints = 9,
    adSchemaReferentialConstraints = 9,
    adSchemaTableConstraints = 10,
    adSchemaColumnsDomainUsage = 11,
    adSchemaIndexes = 12,
    adSchemaColumnPrivileges = 13,
    adSchemaTablePrivileges = 14,
    adSchemaUsagePrivileges = 15,
    adSchemaProcedures = 16,
    adSchemaSchemata = 17,
    adSchemaSQLLanguages = 18,
    adSchemaStatistics = 19,
    adSchemaTables = 20,
    adSchemaTranslations = 21,
    adSchemaProviderTypes = 22,
    adSchemaViews = 23,
    adSchemaViewColumnUsage = 24,
    adSchemaViewTableUsage = 25,
    adSchemaProcedureParameters = 26,
    adSchemaForeignKeys = 27,
    adSchemaPrimaryKeys = 28,
    adSchemaProcedureColumns = 29,
    adSchemaDBInfoKeywords = 30,
    adSchemaDBInfoLiterals = 31,
    adSchemaCubes = 32,
    adSchemaDimensions = 33,
    adSchemaHierarchies = 34,
    adSchemaLevels = 35,
    adSchemaMeasures = 36,
    adSchemaProperties = 37,
    adSchemaMembers = 38,
    adSchemaTrustees = 39
};

enum __declspec(uuid("0000057e-0000-0010-8000-00aa006d2ea4"))
FieldStatusEnum
{
    adFieldOK = 0,
    adFieldCantConvertValue = 2,
    adFieldIsNull = 3,
    adFieldTruncated = 4,
    adFieldSignMismatch = 5,
    adFieldDataOverflow = 6,
    adFieldCantCreate = 7,
    adFieldUnavailable = 8,
    adFieldPermissionDenied = 9,
    adFieldIntegrityViolation = 10,
    adFieldSchemaViolation = 11,
    adFieldBadStatus = 12,
    adFieldDefault = 13,
    adFieldIgnore = 15,
    adFieldDoesNotExist = 16,
    adFieldInvalidURL = 17,
    adFieldResourceLocked = 18,
    adFieldResourceExists = 19,
    adFieldCannotComplete = 20,
    adFieldVolumeNotFound = 21,
    adFieldOutOfSpace = 22,
    adFieldCannotDeleteSource = 23,
    adFieldReadOnly = 24,
    adFieldResourceOutOfScope = 25,
    adFieldAlreadyExists = 26,
    adFieldPendingInsert = 65536,
    adFieldPendingDelete = 131072,
    adFieldPendingChange = 262144,
    adFieldPendingUnknown = 524288,
    adFieldPendingUnknownDelete = 1048576
};

enum __declspec(uuid("00000552-0000-0010-8000-00aa006d2ea4"))
SeekEnum
{
    adSeekFirstEQ = 1,
    adSeekLastEQ = 2,
    adSeekAfterEQ = 4,
    adSeekAfter = 8,
    adSeekBeforeEQ = 16,
    adSeekBefore = 32
};

enum __declspec(uuid("0000054a-0000-0010-8000-00aa006d2ea4"))
ADCPROP_UPDATECRITERIA_ENUM
{
    adCriteriaKey = 0,
    adCriteriaAllCols = 1,
    adCriteriaUpdCols = 2,
    adCriteriaTimeStamp = 3
};

enum __declspec(uuid("0000054b-0000-0010-8000-00aa006d2ea4"))
ADCPROP_ASYNCTHREADPRIORITY_ENUM
{
    adPriorityLowest = 1,
    adPriorityBelowNormal = 2,
    adPriorityNormal = 3,
    adPriorityAboveNormal = 4,
    adPriorityHighest = 5
};

enum __declspec(uuid("00000554-0000-0010-8000-00aa006d2ea4"))
ADCPROP_AUTORECALC_ENUM
{
    adRecalcUpFront = 0,
    adRecalcAlways = 1
};

enum __declspec(uuid("00000553-0000-0010-8000-00aa006d2ea4"))
ADCPROP_UPDATERESYNC_ENUM
{
    adResyncNone = 0,
    adResyncAutoIncrement = 1,
    adResyncConflicts = 2,
    adResyncUpdates = 4,
    adResyncInserts = 8,
    adResyncAll = 15
};

enum __declspec(uuid("00000573-0000-0010-8000-00aa006d2ea4"))
MoveRecordOptionsEnum
{
    adMoveUnspecified = -1,
    adMoveOverWrite = 1,
    adMoveDontUpdateLinks = 2,
    adMoveAllowEmulation = 4
};

enum __declspec(uuid("00000574-0000-0010-8000-00aa006d2ea4"))
CopyRecordOptionsEnum
{
    adCopyUnspecified = -1,
    adCopyOverWrite = 1,
    adCopyAllowEmulation = 4,
    adCopyNonRecursive = 2
};

enum __declspec(uuid("00000576-0000-0010-8000-00aa006d2ea4"))
StreamTypeEnum
{
    adTypeBinary = 1,
    adTypeText = 2
};

enum __declspec(uuid("00000577-0000-0010-8000-00aa006d2ea4"))
LineSeparatorEnum
{
    adLF = 10,
    adCR = 13,
    adCRLF = -1
};

enum __declspec(uuid("0000057a-0000-0010-8000-00aa006d2ea4"))
StreamOpenOptionsEnum
{
    adOpenStreamUnspecified = -1,
    adOpenStreamAsync = 1,
    adOpenStreamFromRecord = 4
};

enum __declspec(uuid("0000057b-0000-0010-8000-00aa006d2ea4"))
StreamWriteEnum
{
    adWriteChar = 0,
    adWriteLine = 1,
    stWriteChar = 0,
    stWriteLine = 1
};

enum __declspec(uuid("0000057c-0000-0010-8000-00aa006d2ea4"))
SaveOptionsEnum
{
    adSaveCreateNotExist = 1,
    adSaveCreateOverWrite = 2
};

enum FieldEnum
{
    adDefaultStream = -1,
    adRecordURL = -2
};

enum StreamReadEnum
{
    adReadAll = -1,
    adReadLine = -2
};

enum __declspec(uuid("0000057d-0000-0010-8000-00aa006d2ea4"))
RecordTypeEnum
{
    adSimpleRecord = 0,
    adCollectionRecord = 1,
    adStructDoc = 2
};

struct __declspec(uuid("00000512-0000-0010-8000-00aa006d2ea4"))
_Collection : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Count (
        /*[out,retval]*/ long * c ) = 0;
      virtual HRESULT __stdcall _NewEnum (
        /*[out,retval]*/ IUnknown * * ppvObject ) = 0;
      virtual HRESULT __stdcall Refresh ( ) = 0;
};

struct __declspec(uuid("00000513-0000-0010-8000-00aa006d2ea4"))
_DynaCollection : _Collection
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Append (
        /*[in]*/ IDispatch * Object ) = 0;
      virtual HRESULT __stdcall Delete (
        /*[in]*/ VARIANT Index ) = 0;
};

struct __declspec(uuid("00000503-0000-0010-8000-00aa006d2ea4"))
Property : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pval ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pval ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum DataTypeEnum * ptype ) = 0;
      virtual HRESULT __stdcall get_Attributes (
        /*[out,retval]*/ long * plAttributes ) = 0;
      virtual HRESULT __stdcall put_Attributes (
        /*[in]*/ long plAttributes ) = 0;
};

struct __declspec(uuid("00000504-0000-0010-8000-00aa006d2ea4"))
Properties : _Collection
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Property * * ppvObject ) = 0;
};

struct __declspec(uuid("00000534-0000-0010-8000-00aa006d2ea4"))
_ADO : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Properties (
        /*[out,retval]*/ struct Properties * * ppvObject ) = 0;
};

struct __declspec(uuid("00000500-0000-0010-8000-00aa006d2ea4"))
Error : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Number (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall get_Source (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall get_Description (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall get_HelpFile (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall get_HelpContext (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall get_SQLState (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall get_NativeError (
        /*[out,retval]*/ long * pl ) = 0;
};

struct __declspec(uuid("00000501-0000-0010-8000-00aa006d2ea4"))
Errors : _Collection
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Error * * ppvObject ) = 0;
      virtual HRESULT __stdcall Clear ( ) = 0;
};

struct __declspec(uuid("0000054c-0000-0010-8000-00aa006d2ea4"))
Field20 : _ADO
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ActualSize (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall get_Attributes (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall get_DefinedSize (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum DataTypeEnum * pDataType ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pvar ) = 0;
      virtual HRESULT __stdcall get_Precision (
        /*[out,retval]*/ unsigned char * pbPrecision ) = 0;
      virtual HRESULT __stdcall get_NumericScale (
        /*[out,retval]*/ unsigned char * pbNumericScale ) = 0;
      virtual HRESULT __stdcall AppendChunk (
        /*[in]*/ VARIANT Data ) = 0;
      virtual HRESULT __stdcall GetChunk (
        /*[in]*/ long Length,
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall get_OriginalValue (
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall get_UnderlyingValue (
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall get_DataFormat (
        /*[out,retval]*/ IUnknown * * ppiDF ) = 0;
      virtual HRESULT __stdcall putref_DataFormat (
        /*[in]*/ IUnknown * ppiDF ) = 0;
      virtual HRESULT __stdcall put_Precision (
        /*[in]*/ unsigned char pbPrecision ) = 0;
      virtual HRESULT __stdcall put_NumericScale (
        /*[in]*/ unsigned char pbNumericScale ) = 0;
      virtual HRESULT __stdcall put_Type (
        /*[in]*/ enum DataTypeEnum pDataType ) = 0;
      virtual HRESULT __stdcall put_DefinedSize (
        /*[in]*/ long pl ) = 0;
      virtual HRESULT __stdcall put_Attributes (
        /*[in]*/ long pl ) = 0;
};

struct __declspec(uuid("00000569-0000-0010-8000-00aa006d2ea4"))
Field : Field20
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Status (
        /*[out,retval]*/ long * pFStatus ) = 0;
};

struct __declspec(uuid("00000506-0000-0010-8000-00aa006d2ea4"))
Fields15 : _Collection
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct Field * * ppvObject ) = 0;
};

struct __declspec(uuid("0000054d-0000-0010-8000-00aa006d2ea4"))
Fields20 : Fields15
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall _Append (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum DataTypeEnum Type,
        /*[in]*/ long DefinedSize,
        /*[in]*/ enum FieldAttributeEnum Attrib ) = 0;
      virtual HRESULT __stdcall Delete (
        /*[in]*/ VARIANT Index ) = 0;
};

struct __declspec(uuid("00000564-0000-0010-8000-00aa006d2ea4"))
Fields : Fields20
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Append (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum DataTypeEnum Type,
        /*[in]*/ long DefinedSize,
        /*[in]*/ enum FieldAttributeEnum Attrib,
        /*[in]*/ VARIANT FieldValue = vtMissing ) = 0;
      virtual HRESULT __stdcall Update ( ) = 0;
      virtual HRESULT __stdcall Resync (
        /*[in]*/ enum ResyncEnum ResyncValues ) = 0;
      virtual HRESULT __stdcall CancelUpdate ( ) = 0;
};

struct __declspec(uuid("0000050c-0000-0010-8000-00aa006d2ea4"))
_Parameter : _ADO
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstr ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pvar ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum DataTypeEnum * psDataType ) = 0;
      virtual HRESULT __stdcall put_Type (
        /*[in]*/ enum DataTypeEnum psDataType ) = 0;
      virtual HRESULT __stdcall put_Direction (
        /*[in]*/ enum ParameterDirectionEnum plParmDirection ) = 0;
      virtual HRESULT __stdcall get_Direction (
        /*[out,retval]*/ enum ParameterDirectionEnum * plParmDirection ) = 0;
      virtual HRESULT __stdcall put_Precision (
        /*[in]*/ unsigned char pbPrecision ) = 0;
      virtual HRESULT __stdcall get_Precision (
        /*[out,retval]*/ unsigned char * pbPrecision ) = 0;
      virtual HRESULT __stdcall put_NumericScale (
        /*[in]*/ unsigned char pbScale ) = 0;
      virtual HRESULT __stdcall get_NumericScale (
        /*[out,retval]*/ unsigned char * pbScale ) = 0;
      virtual HRESULT __stdcall put_Size (
        /*[in]*/ long pl ) = 0;
      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall AppendChunk (
        /*[in]*/ VARIANT Val ) = 0;
      virtual HRESULT __stdcall get_Attributes (
        /*[out,retval]*/ long * plParmAttribs ) = 0;
      virtual HRESULT __stdcall put_Attributes (
        /*[in]*/ long plParmAttribs ) = 0;
};

struct __declspec(uuid("0000050d-0000-0010-8000-00aa006d2ea4"))
Parameters : _DynaCollection
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Item (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ struct _Parameter * * ppvObject ) = 0;
};

struct __declspec(uuid("00000400-0000-0010-8000-00aa006d2ea4"))
ConnectionEvents : IDispatch
{};

struct __declspec(uuid("00000266-0000-0010-8000-00aa006d2ea4"))
RecordsetEvents : IDispatch
{};

struct __declspec(uuid("00000516-0000-0010-8000-00aa006d2ea4"))
ADOConnectionConstruction15 : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_DSO (
        /*[out,retval]*/ IUnknown * * ppDSO ) = 0;
      virtual HRESULT __stdcall get_Session (
        /*[out,retval]*/ IUnknown * * ppSession ) = 0;
      virtual HRESULT __stdcall WrapDSOandSession (
        /*[in]*/ IUnknown * pDSO,
        /*[in]*/ IUnknown * pSession ) = 0;
};

struct __declspec(uuid("00000551-0000-0010-8000-00aa006d2ea4"))
ADOConnectionConstruction : ADOConnectionConstruction15
{};

struct __declspec(uuid("00000514-0000-0010-8000-00aa006d2ea4"))
Connection;
    // [ default ] interface _Connection
    // [ default, source ] dispinterface ConnectionEvents

struct __declspec(uuid("00000560-0000-0010-8000-00aa006d2ea4"))
Record;
    // [ default ] interface _Record

struct __declspec(uuid("00000563-0000-0010-8000-00aa006d2ea4"))
IRecFields : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall ADOCheck ( ) = 0;
};

struct __declspec(uuid("00000565-0000-0010-8000-00aa006d2ea4"))
_Stream : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Size (
        /*[out,retval]*/ long * pSize ) = 0;
      virtual HRESULT __stdcall get_EOS (
        /*[out,retval]*/ VARIANT_BOOL * pEOS ) = 0;
      virtual HRESULT __stdcall get_Position (
        /*[out,retval]*/ long * pPos ) = 0;
      virtual HRESULT __stdcall put_Position (
        /*[in]*/ long pPos ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum StreamTypeEnum * ptype ) = 0;
      virtual HRESULT __stdcall put_Type (
        /*[in]*/ enum StreamTypeEnum ptype ) = 0;
      virtual HRESULT __stdcall get_LineSeparator (
        /*[out,retval]*/ enum LineSeparatorEnum * pLS ) = 0;
      virtual HRESULT __stdcall put_LineSeparator (
        /*[in]*/ enum LineSeparatorEnum pLS ) = 0;
      virtual HRESULT __stdcall get_State (
        /*[out,retval]*/ enum ObjectStateEnum * pState ) = 0;
      virtual HRESULT __stdcall get_Mode (
        /*[out,retval]*/ enum ConnectModeEnum * pMode ) = 0;
      virtual HRESULT __stdcall put_Mode (
        /*[in]*/ enum ConnectModeEnum pMode ) = 0;
      virtual HRESULT __stdcall get_Charset (
        /*[out,retval]*/ BSTR * pbstrCharset ) = 0;
      virtual HRESULT __stdcall put_Charset (
        /*[in]*/ BSTR pbstrCharset ) = 0;
      virtual HRESULT __stdcall Read (
        /*[in]*/ long NumBytes,
        /*[out,retval]*/ VARIANT * pval ) = 0;
      virtual HRESULT __stdcall Open (
        /*[in]*/ VARIANT Source,
        /*[in]*/ enum ConnectModeEnum Mode,
        /*[in]*/ enum StreamOpenOptionsEnum Options,
        /*[in]*/ BSTR UserName,
        /*[in]*/ BSTR Password ) = 0;
      virtual HRESULT __stdcall Close ( ) = 0;
      virtual HRESULT __stdcall SkipLine ( ) = 0;
      virtual HRESULT __stdcall Write (
        /*[in]*/ VARIANT Buffer ) = 0;
      virtual HRESULT __stdcall SetEOS ( ) = 0;
      virtual HRESULT __stdcall CopyTo (
        /*[in]*/ struct _Stream * DestStream,
        /*[in]*/ long CharNumber ) = 0;
      virtual HRESULT __stdcall Flush ( ) = 0;
      virtual HRESULT __stdcall SaveToFile (
        /*[in]*/ BSTR FileName,
        /*[in]*/ enum SaveOptionsEnum Options ) = 0;
      virtual HRESULT __stdcall LoadFromFile (
        /*[in]*/ BSTR FileName ) = 0;
      virtual HRESULT __stdcall ReadText (
        /*[in]*/ long NumChars,
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall WriteText (
        /*[in]*/ BSTR Data,
        /*[in]*/ enum StreamWriteEnum Options ) = 0;
      virtual HRESULT __stdcall Cancel ( ) = 0;
};

struct __declspec(uuid("00000566-0000-0010-8000-00aa006d2ea4"))
Stream;
    // [ default ] interface _Stream

struct __declspec(uuid("00000567-0000-0010-8000-00aa006d2ea4"))
ADORecordConstruction : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Row (
        /*[out,retval]*/ IUnknown * * ppRow ) = 0;
      virtual HRESULT __stdcall put_Row (
        /*[in]*/ IUnknown * ppRow ) = 0;
      virtual HRESULT __stdcall put_ParentRow (
        /*[in]*/ IUnknown * _arg1 ) = 0;
};

struct __declspec(uuid("00000568-0000-0010-8000-00aa006d2ea4"))
ADOStreamConstruction : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Stream (
        /*[out,retval]*/ IUnknown * * ppStm ) = 0;
      virtual HRESULT __stdcall put_Stream (
        /*[in]*/ IUnknown * ppStm ) = 0;
};

struct __declspec(uuid("00000517-0000-0010-8000-00aa006d2ea4"))
ADOCommandConstruction : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_OLEDBCommand (
        /*[out,retval]*/ IUnknown * * ppOLEDBCommand ) = 0;
      virtual HRESULT __stdcall put_OLEDBCommand (
        /*[in]*/ IUnknown * ppOLEDBCommand ) = 0;
};

struct __declspec(uuid("00000507-0000-0010-8000-00aa006d2ea4"))
Command;
    // [ default ] interface _Command

struct __declspec(uuid("00000535-0000-0010-8000-00aa006d2ea4"))
Recordset;
    // [ default ] interface _Recordset
    // [ default, source ] dispinterface RecordsetEvents

struct __declspec(uuid("00000283-0000-0010-8000-00aa006d2ea4"))
ADORecordsetConstruction : IDispatch
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_Rowset (
        /*[out,retval]*/ IUnknown * * ppRowset ) = 0;
      virtual HRESULT __stdcall put_Rowset (
        /*[in]*/ IUnknown * ppRowset ) = 0;
      virtual HRESULT __stdcall get_Chapter (
        /*[out,retval]*/ long * plChapter ) = 0;
      virtual HRESULT __stdcall put_Chapter (
        /*[in]*/ long plChapter ) = 0;
      virtual HRESULT __stdcall get_RowPosition (
        /*[out,retval]*/ IUnknown * * ppRowPos ) = 0;
      virtual HRESULT __stdcall put_RowPosition (
        /*[in]*/ IUnknown * ppRowPos ) = 0;
};

struct __declspec(uuid("00000505-0000-0010-8000-00aa006d2ea4"))
Field15 : _ADO
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ActualSize (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall get_Attributes (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall get_DefinedSize (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall get_Type (
        /*[out,retval]*/ enum DataTypeEnum * pDataType ) = 0;
      virtual HRESULT __stdcall get_Value (
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall put_Value (
        /*[in]*/ VARIANT pvar ) = 0;
      virtual HRESULT __stdcall get_Precision (
        /*[out,retval]*/ unsigned char * pbPrecision ) = 0;
      virtual HRESULT __stdcall get_NumericScale (
        /*[out,retval]*/ unsigned char * pbNumericScale ) = 0;
      virtual HRESULT __stdcall AppendChunk (
        /*[in]*/ VARIANT Data ) = 0;
      virtual HRESULT __stdcall GetChunk (
        /*[in]*/ long Length,
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall get_OriginalValue (
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall get_UnderlyingValue (
        /*[out,retval]*/ VARIANT * pvar ) = 0;
};

struct __declspec(uuid("0000050b-0000-0010-8000-00aa006d2ea4"))
Parameter;
    // [ default ] interface _Parameter

struct __declspec(uuid("00000508-0000-0010-8000-00aa006d2ea4"))
Command15 : _ADO
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ActiveConnection (
        /*[out,retval]*/ struct _Connection * * ppvObject ) = 0;
      virtual HRESULT __stdcall putref_ActiveConnection (
        /*[in]*/ struct _Connection * ppvObject ) = 0;
      virtual HRESULT __stdcall put_ActiveConnection (
        /*[in]*/ VARIANT ppvObject ) = 0;
      virtual HRESULT __stdcall get_CommandText (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall put_CommandText (
        /*[in]*/ BSTR pbstr ) = 0;
      virtual HRESULT __stdcall get_CommandTimeout (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall put_CommandTimeout (
        /*[in]*/ long pl ) = 0;
      virtual HRESULT __stdcall get_Prepared (
        /*[out,retval]*/ VARIANT_BOOL * pfPrepared ) = 0;
      virtual HRESULT __stdcall put_Prepared (
        /*[in]*/ VARIANT_BOOL pfPrepared ) = 0;
      virtual HRESULT __stdcall Execute (
        /*[out]*/ VARIANT * RecordsAffected,
        /*[in]*/ VARIANT * Parameters,
        /*[in]*/ long Options,
        /*[out,retval]*/ struct _Recordset * * ppiRs ) = 0;
      virtual HRESULT __stdcall CreateParameter (
        /*[in]*/ BSTR Name,
        /*[in]*/ enum DataTypeEnum Type,
        /*[in]*/ enum ParameterDirectionEnum Direction,
        /*[in]*/ long Size,
        /*[in]*/ VARIANT Value,
        /*[out,retval]*/ struct _Parameter * * ppiprm ) = 0;
      virtual HRESULT __stdcall get_Parameters (
        /*[out,retval]*/ struct Parameters * * ppvObject ) = 0;
      virtual HRESULT __stdcall put_CommandType (
        /*[in]*/ enum CommandTypeEnum plCmdType ) = 0;
      virtual HRESULT __stdcall get_CommandType (
        /*[out,retval]*/ enum CommandTypeEnum * plCmdType ) = 0;
      virtual HRESULT __stdcall get_Name (
        /*[out,retval]*/ BSTR * pbstrName ) = 0;
      virtual HRESULT __stdcall put_Name (
        /*[in]*/ BSTR pbstrName ) = 0;
};

struct __declspec(uuid("0000054e-0000-0010-8000-00aa006d2ea4"))
_Command : Command15
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_State (
        /*[out,retval]*/ long * plObjState ) = 0;
      virtual HRESULT __stdcall Cancel ( ) = 0;
};

struct __declspec(uuid("00000515-0000-0010-8000-00aa006d2ea4"))
Connection15 : _ADO
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ConnectionString (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall put_ConnectionString (
        /*[in]*/ BSTR pbstr ) = 0;
      virtual HRESULT __stdcall get_CommandTimeout (
        /*[out,retval]*/ long * plTimeout ) = 0;
      virtual HRESULT __stdcall put_CommandTimeout (
        /*[in]*/ long plTimeout ) = 0;
      virtual HRESULT __stdcall get_ConnectionTimeout (
        /*[out,retval]*/ long * plTimeout ) = 0;
      virtual HRESULT __stdcall put_ConnectionTimeout (
        /*[in]*/ long plTimeout ) = 0;
      virtual HRESULT __stdcall get_Version (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall Close ( ) = 0;
      virtual HRESULT __stdcall Execute (
        /*[in]*/ BSTR CommandText,
        /*[out]*/ VARIANT * RecordsAffected,
        /*[in]*/ long Options,
        /*[out,retval]*/ struct _Recordset * * ppiRset ) = 0;
      virtual HRESULT __stdcall BeginTrans (
        /*[out,retval]*/ long * TransactionLevel ) = 0;
      virtual HRESULT __stdcall CommitTrans ( ) = 0;
      virtual HRESULT __stdcall RollbackTrans ( ) = 0;
      virtual HRESULT __stdcall Open (
        /*[in]*/ BSTR ConnectionString,
        /*[in]*/ BSTR UserID,
        /*[in]*/ BSTR Password,
        /*[in]*/ long Options ) = 0;
      virtual HRESULT __stdcall get_Errors (
        /*[out,retval]*/ struct Errors * * ppvObject ) = 0;
      virtual HRESULT __stdcall get_DefaultDatabase (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall put_DefaultDatabase (
        /*[in]*/ BSTR pbstr ) = 0;
      virtual HRESULT __stdcall get_IsolationLevel (
        /*[out,retval]*/ enum IsolationLevelEnum * Level ) = 0;
      virtual HRESULT __stdcall put_IsolationLevel (
        /*[in]*/ enum IsolationLevelEnum Level ) = 0;
      virtual HRESULT __stdcall get_Attributes (
        /*[out,retval]*/ long * plAttr ) = 0;
      virtual HRESULT __stdcall put_Attributes (
        /*[in]*/ long plAttr ) = 0;
      virtual HRESULT __stdcall get_CursorLocation (
        /*[out,retval]*/ enum CursorLocationEnum * plCursorLoc ) = 0;
      virtual HRESULT __stdcall put_CursorLocation (
        /*[in]*/ enum CursorLocationEnum plCursorLoc ) = 0;
      virtual HRESULT __stdcall get_Mode (
        /*[out,retval]*/ enum ConnectModeEnum * plMode ) = 0;
      virtual HRESULT __stdcall put_Mode (
        /*[in]*/ enum ConnectModeEnum plMode ) = 0;
      virtual HRESULT __stdcall get_Provider (
        /*[out,retval]*/ BSTR * pbstr ) = 0;
      virtual HRESULT __stdcall put_Provider (
        /*[in]*/ BSTR pbstr ) = 0;
      virtual HRESULT __stdcall get_State (
        /*[out,retval]*/ long * plObjState ) = 0;
      virtual HRESULT __stdcall OpenSchema (
        /*[in]*/ enum SchemaEnum Schema,
        /*[in]*/ VARIANT Restrictions,
        /*[in]*/ VARIANT SchemaID,
        /*[out,retval]*/ struct _Recordset * * pprset ) = 0;
};

struct __declspec(uuid("00000550-0000-0010-8000-00aa006d2ea4"))
_Connection : Connection15
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Cancel ( ) = 0;
};

struct __declspec(uuid("0000050e-0000-0010-8000-00aa006d2ea4"))
Recordset15 : _ADO
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_AbsolutePosition (
        /*[out,retval]*/ enum PositionEnum * pl ) = 0;
      virtual HRESULT __stdcall put_AbsolutePosition (
        /*[in]*/ enum PositionEnum pl ) = 0;
      virtual HRESULT __stdcall putref_ActiveConnection (
        /*[in]*/ IDispatch * pvar ) = 0;
      virtual HRESULT __stdcall put_ActiveConnection (
        /*[in]*/ VARIANT pvar ) = 0;
      virtual HRESULT __stdcall get_ActiveConnection (
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall get_BOF (
        /*[out,retval]*/ VARIANT_BOOL * pb ) = 0;
      virtual HRESULT __stdcall get_Bookmark (
        /*[out,retval]*/ VARIANT * pvBookmark ) = 0;
      virtual HRESULT __stdcall put_Bookmark (
        /*[in]*/ VARIANT pvBookmark ) = 0;
      virtual HRESULT __stdcall get_CacheSize (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall put_CacheSize (
        /*[in]*/ long pl ) = 0;
      virtual HRESULT __stdcall get_CursorType (
        /*[out,retval]*/ enum CursorTypeEnum * plCursorType ) = 0;
      virtual HRESULT __stdcall put_CursorType (
        /*[in]*/ enum CursorTypeEnum plCursorType ) = 0;
      virtual HRESULT __stdcall get_EOF (
        /*[out,retval]*/ VARIANT_BOOL * pb ) = 0;
      virtual HRESULT __stdcall get_Fields (
        /*[out,retval]*/ struct Fields * * ppvObject ) = 0;
      virtual HRESULT __stdcall get_LockType (
        /*[out,retval]*/ enum LockTypeEnum * plLockType ) = 0;
      virtual HRESULT __stdcall put_LockType (
        /*[in]*/ enum LockTypeEnum plLockType ) = 0;
      virtual HRESULT __stdcall get_MaxRecords (
        /*[out,retval]*/ long * plMaxRecords ) = 0;
      virtual HRESULT __stdcall put_MaxRecords (
        /*[in]*/ long plMaxRecords ) = 0;
      virtual HRESULT __stdcall get_RecordCount (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall putref_Source (
        /*[in]*/ IDispatch * pvSource ) = 0;
      virtual HRESULT __stdcall put_Source (
        /*[in]*/ BSTR pvSource ) = 0;
      virtual HRESULT __stdcall get_Source (
        /*[out,retval]*/ VARIANT * pvSource ) = 0;
      virtual HRESULT __stdcall AddNew (
        /*[in]*/ VARIANT FieldList = vtMissing,
        /*[in]*/ VARIANT Values = vtMissing ) = 0;
      virtual HRESULT __stdcall CancelUpdate ( ) = 0;
      virtual HRESULT __stdcall Close ( ) = 0;
      virtual HRESULT __stdcall Delete (
        /*[in]*/ enum AffectEnum AffectRecords ) = 0;
      virtual HRESULT __stdcall GetRows (
        /*[in]*/ long Rows,
        /*[in]*/ VARIANT Start,
        /*[in]*/ VARIANT Fields,
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall Move (
        /*[in]*/ long NumRecords,
        /*[in]*/ VARIANT Start = vtMissing ) = 0;
      virtual HRESULT __stdcall MoveNext ( ) = 0;
      virtual HRESULT __stdcall MovePrevious ( ) = 0;
      virtual HRESULT __stdcall MoveFirst ( ) = 0;
      virtual HRESULT __stdcall MoveLast ( ) = 0;
      virtual HRESULT __stdcall Open (
        /*[in]*/ VARIANT Source,
        /*[in]*/ VARIANT ActiveConnection,
        /*[in]*/ enum CursorTypeEnum CursorType,
        /*[in]*/ enum LockTypeEnum LockType,
        /*[in]*/ long Options ) = 0;
      virtual HRESULT __stdcall Requery (
        /*[in]*/ long Options ) = 0;
      virtual HRESULT __stdcall _xResync (
        /*[in]*/ enum AffectEnum AffectRecords ) = 0;
      virtual HRESULT __stdcall Update (
        /*[in]*/ VARIANT Fields = vtMissing,
        /*[in]*/ VARIANT Values = vtMissing ) = 0;
      virtual HRESULT __stdcall get_AbsolutePage (
        /*[out,retval]*/ enum PositionEnum * pl ) = 0;
      virtual HRESULT __stdcall put_AbsolutePage (
        /*[in]*/ enum PositionEnum pl ) = 0;
      virtual HRESULT __stdcall get_EditMode (
        /*[out,retval]*/ enum EditModeEnum * pl ) = 0;
      virtual HRESULT __stdcall get_Filter (
        /*[out,retval]*/ VARIANT * Criteria ) = 0;
      virtual HRESULT __stdcall put_Filter (
        /*[in]*/ VARIANT Criteria ) = 0;
      virtual HRESULT __stdcall get_PageCount (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall get_PageSize (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall put_PageSize (
        /*[in]*/ long pl ) = 0;
      virtual HRESULT __stdcall get_Sort (
        /*[out,retval]*/ BSTR * Criteria ) = 0;
      virtual HRESULT __stdcall put_Sort (
        /*[in]*/ BSTR Criteria ) = 0;
      virtual HRESULT __stdcall get_Status (
        /*[out,retval]*/ long * pl ) = 0;
      virtual HRESULT __stdcall get_State (
        /*[out,retval]*/ long * plObjState ) = 0;
      virtual HRESULT __stdcall _xClone (
        /*[out,retval]*/ struct _Recordset * * ppvObject ) = 0;
      virtual HRESULT __stdcall UpdateBatch (
        /*[in]*/ enum AffectEnum AffectRecords ) = 0;
      virtual HRESULT __stdcall CancelBatch (
        /*[in]*/ enum AffectEnum AffectRecords ) = 0;
      virtual HRESULT __stdcall get_CursorLocation (
        /*[out,retval]*/ enum CursorLocationEnum * plCursorLoc ) = 0;
      virtual HRESULT __stdcall put_CursorLocation (
        /*[in]*/ enum CursorLocationEnum plCursorLoc ) = 0;
      virtual HRESULT __stdcall NextRecordset (
        /*[out]*/ VARIANT * RecordsAffected,
        /*[out,retval]*/ struct _Recordset * * ppiRs ) = 0;
      virtual HRESULT __stdcall Supports (
        /*[in]*/ enum CursorOptionEnum CursorOptions,
        /*[out,retval]*/ VARIANT_BOOL * pb ) = 0;
      virtual HRESULT __stdcall get_Collect (
        /*[in]*/ VARIANT Index,
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall put_Collect (
        /*[in]*/ VARIANT Index,
        /*[in]*/ VARIANT pvar ) = 0;
      virtual HRESULT __stdcall get_MarshalOptions (
        /*[out,retval]*/ enum MarshalOptionsEnum * peMarshal ) = 0;
      virtual HRESULT __stdcall put_MarshalOptions (
        /*[in]*/ enum MarshalOptionsEnum peMarshal ) = 0;
      virtual HRESULT __stdcall Find (
        /*[in]*/ BSTR Criteria,
        /*[in]*/ long SkipRecords,
        /*[in]*/ enum SearchDirectionEnum SearchDirection,
        /*[in]*/ VARIANT Start = vtMissing ) = 0;
};

struct __declspec(uuid("0000054f-0000-0010-8000-00aa006d2ea4"))
Recordset20 : Recordset15
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Cancel ( ) = 0;
      virtual HRESULT __stdcall get_DataSource (
        /*[out,retval]*/ IUnknown * * ppunkDataSource ) = 0;
      virtual HRESULT __stdcall putref_DataSource (
        /*[in]*/ IUnknown * ppunkDataSource ) = 0;
      virtual HRESULT __stdcall _xSave (
        /*[in]*/ BSTR FileName,
        /*[in]*/ enum PersistFormatEnum PersistFormat ) = 0;
      virtual HRESULT __stdcall get_ActiveCommand (
        /*[out,retval]*/ IDispatch * * ppCmd ) = 0;
      virtual HRESULT __stdcall put_StayInSync (
        /*[in]*/ VARIANT_BOOL pbStayInSync ) = 0;
      virtual HRESULT __stdcall get_StayInSync (
        /*[out,retval]*/ VARIANT_BOOL * pbStayInSync ) = 0;
      virtual HRESULT __stdcall GetString (
        /*[in]*/ enum StringFormatEnum StringFormat,
        /*[in]*/ long NumRows,
        /*[in]*/ BSTR ColumnDelimeter,
        /*[in]*/ BSTR RowDelimeter,
        /*[in]*/ BSTR NullExpr,
        /*[out,retval]*/ BSTR * pRetString ) = 0;
      virtual HRESULT __stdcall get_DataMember (
        /*[out,retval]*/ BSTR * pbstrDataMember ) = 0;
      virtual HRESULT __stdcall put_DataMember (
        /*[in]*/ BSTR pbstrDataMember ) = 0;
      virtual HRESULT __stdcall CompareBookmarks (
        /*[in]*/ VARIANT Bookmark1,
        /*[in]*/ VARIANT Bookmark2,
        /*[out,retval]*/ enum CompareEnum * pCompare ) = 0;
      virtual HRESULT __stdcall Clone (
        /*[in]*/ enum LockTypeEnum LockType,
        /*[out,retval]*/ struct _Recordset * * ppvObject ) = 0;
      virtual HRESULT __stdcall Resync (
        /*[in]*/ enum AffectEnum AffectRecords,
        /*[in]*/ enum ResyncEnum ResyncValues ) = 0;
};

struct __declspec(uuid("00000555-0000-0010-8000-00aa006d2ea4"))
Recordset21 : Recordset20
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Seek (
        /*[in]*/ VARIANT KeyValues,
        /*[in]*/ enum SeekEnum SeekOption ) = 0;
      virtual HRESULT __stdcall put_Index (
        /*[in]*/ BSTR pbstrIndex ) = 0;
      virtual HRESULT __stdcall get_Index (
        /*[out,retval]*/ BSTR * pbstrIndex ) = 0;
};

struct __declspec(uuid("00000556-0000-0010-8000-00aa006d2ea4"))
_Recordset : Recordset21
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall Save (
        /*[in]*/ VARIANT Destination,
        /*[in]*/ enum PersistFormatEnum PersistFormat ) = 0;
};

struct __declspec(uuid("00000402-0000-0010-8000-00aa006d2ea4"))
ConnectionEventsVt : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall InfoMessage (
        /*[in]*/ struct Error * pError,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Connection * pConnection ) = 0;
      virtual HRESULT __stdcall BeginTransComplete (
        /*[in]*/ long TransactionLevel,
        /*[in]*/ struct Error * pError,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Connection * pConnection ) = 0;
      virtual HRESULT __stdcall CommitTransComplete (
        /*[in]*/ struct Error * pError,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Connection * pConnection ) = 0;
      virtual HRESULT __stdcall RollbackTransComplete (
        /*[in]*/ struct Error * pError,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Connection * pConnection ) = 0;
      virtual HRESULT __stdcall WillExecute (
        /*[in,out]*/ BSTR * Source,
        /*[in,out]*/ enum CursorTypeEnum * CursorType,
        /*[in,out]*/ enum LockTypeEnum * LockType,
        /*[in,out]*/ long * Options,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Command * pCommand,
        /*[in]*/ struct _Recordset * pRecordset,
        /*[in]*/ struct _Connection * pConnection ) = 0;
      virtual HRESULT __stdcall ExecuteComplete (
        /*[in]*/ long RecordsAffected,
        /*[in]*/ struct Error * pError,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Command * pCommand,
        /*[in]*/ struct _Recordset * pRecordset,
        /*[in]*/ struct _Connection * pConnection ) = 0;
      virtual HRESULT __stdcall WillConnect (
        /*[in,out]*/ BSTR * ConnectionString,
        /*[in,out]*/ BSTR * UserID,
        /*[in,out]*/ BSTR * Password,
        /*[in,out]*/ long * Options,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Connection * pConnection ) = 0;
      virtual HRESULT __stdcall ConnectComplete (
        /*[in]*/ struct Error * pError,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Connection * pConnection ) = 0;
      virtual HRESULT __stdcall Disconnect (
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Connection * pConnection ) = 0;
};

struct __declspec(uuid("00000403-0000-0010-8000-00aa006d2ea4"))
RecordsetEventsVt : IUnknown
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall WillChangeField (
        /*[in]*/ long cFields,
        /*[in]*/ VARIANT Fields,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Recordset * pRecordset ) = 0;
      virtual HRESULT __stdcall FieldChangeComplete (
        /*[in]*/ long cFields,
        /*[in]*/ VARIANT Fields,
        /*[in]*/ struct Error * pError,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Recordset * pRecordset ) = 0;
      virtual HRESULT __stdcall WillChangeRecord (
        /*[in]*/ enum EventReasonEnum adReason,
        /*[in]*/ long cRecords,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Recordset * pRecordset ) = 0;
      virtual HRESULT __stdcall RecordChangeComplete (
        /*[in]*/ enum EventReasonEnum adReason,
        /*[in]*/ long cRecords,
        /*[in]*/ struct Error * pError,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Recordset * pRecordset ) = 0;
      virtual HRESULT __stdcall WillChangeRecordset (
        /*[in]*/ enum EventReasonEnum adReason,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Recordset * pRecordset ) = 0;
      virtual HRESULT __stdcall RecordsetChangeComplete (
        /*[in]*/ enum EventReasonEnum adReason,
        /*[in]*/ struct Error * pError,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Recordset * pRecordset ) = 0;
      virtual HRESULT __stdcall WillMove (
        /*[in]*/ enum EventReasonEnum adReason,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Recordset * pRecordset ) = 0;
      virtual HRESULT __stdcall MoveComplete (
        /*[in]*/ enum EventReasonEnum adReason,
        /*[in]*/ struct Error * pError,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Recordset * pRecordset ) = 0;
      virtual HRESULT __stdcall EndOfRecordset (
        /*[in,out]*/ VARIANT_BOOL * fMoreData,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Recordset * pRecordset ) = 0;
      virtual HRESULT __stdcall FetchProgress (
        /*[in]*/ long Progress,
        /*[in]*/ long MaxProgress,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Recordset * pRecordset ) = 0;
      virtual HRESULT __stdcall FetchComplete (
        /*[in]*/ struct Error * pError,
        /*[in,out]*/ enum EventStatusEnum * adStatus,
        /*[in]*/ struct _Recordset * pRecordset ) = 0;
};

struct __declspec(uuid("00000562-0000-0010-8000-00aa006d2ea4"))
_Record : _ADO
{
    //
    // Raw methods provided by interface
    //

      virtual HRESULT __stdcall get_ActiveConnection (
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall put_ActiveConnection (
        /*[in]*/ BSTR pvar ) = 0;
      virtual HRESULT __stdcall putref_ActiveConnection (
        /*[in]*/ struct _Connection * pvar ) = 0;
      virtual HRESULT __stdcall get_State (
        /*[out,retval]*/ enum ObjectStateEnum * pState ) = 0;
      virtual HRESULT __stdcall get_Source (
        /*[out,retval]*/ VARIANT * pvar ) = 0;
      virtual HRESULT __stdcall put_Source (
        /*[in]*/ BSTR pvar ) = 0;
      virtual HRESULT __stdcall putref_Source (
        /*[in]*/ IDispatch * pvar ) = 0;
      virtual HRESULT __stdcall get_Mode (
        /*[out,retval]*/ enum ConnectModeEnum * pMode ) = 0;
      virtual HRESULT __stdcall put_Mode (
        /*[in]*/ enum ConnectModeEnum pMode ) = 0;
      virtual HRESULT __stdcall get_ParentURL (
        /*[out,retval]*/ BSTR * pbstrParentURL ) = 0;
      virtual HRESULT __stdcall MoveRecord (
        /*[in]*/ BSTR Source,
        /*[in]*/ BSTR Destination,
        /*[in]*/ BSTR UserName,
        /*[in]*/ BSTR Password,
        /*[in]*/ enum MoveRecordOptionsEnum Options,
        /*[in]*/ VARIANT_BOOL Async,
        /*[out,retval]*/ BSTR * pbstrNewURL ) = 0;
      virtual HRESULT __stdcall CopyRecord (
        /*[in]*/ BSTR Source,
        /*[in]*/ BSTR Destination,
        /*[in]*/ BSTR UserName,
        /*[in]*/ BSTR Password,
        /*[in]*/ enum CopyRecordOptionsEnum Options,
        /*[in]*/ VARIANT_BOOL Async,
        /*[out,retval]*/ BSTR * pbstrNewURL ) = 0;
      virtual HRESULT __stdcall DeleteRecord (
        /*[in]*/ BSTR Source,
        /*[in]*/ VARIANT_BOOL Async ) = 0;
      virtual HRESULT __stdcall Open (
        /*[in]*/ VARIANT Source,
        /*[in]*/ VARIANT ActiveConnection,
        /*[in]*/ enum ConnectModeEnum Mode,
        /*[in]*/ enum RecordCreateOptionsEnum CreateOptions,
        /*[in]*/ enum RecordOpenOptionsEnum Options,
        /*[in]*/ BSTR UserName,
        /*[in]*/ BSTR Password ) = 0;
      virtual HRESULT __stdcall Close ( ) = 0;
      virtual HRESULT __stdcall get_Fields (
        /*[out,retval]*/ struct Fields * * ppFlds ) = 0;
      virtual HRESULT __stdcall get_RecordType (
        /*[out,retval]*/ enum RecordTypeEnum * ptype ) = 0;
      virtual HRESULT __stdcall GetChildren (
        /*[out,retval]*/ struct _Recordset * * pprset ) = 0;
      virtual HRESULT __stdcall Cancel ( ) = 0;
};

//
// Named GUID constants initializations
//

extern "C" const GUID __declspec(selectany) LIBID_ADODB =
    {0x00000205,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID__Collection =
    {0x00000512,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID__DynaCollection =
    {0x00000513,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
//extern "C" const GUID __declspec(selectany) IID_Property =
//    {0x00000503,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
//extern "C" const GUID __declspec(selectany) IID_Properties =
//    {0x00000504,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID__ADO =
    {0x00000534,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Error =
    {0x00000500,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Errors =
    {0x00000501,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Field20 =
    {0x0000054c,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Field =
    {0x00000569,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Fields15 =
    {0x00000506,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Fields20 =
    {0x0000054d,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Fields =
    {0x00000564,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID__Parameter =
    {0x0000050c,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Parameters =
    {0x0000050d,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) DIID_ConnectionEvents =
    {0x00000400,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) DIID_RecordsetEvents =
    {0x00000266,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_ADOConnectionConstruction15 =
    {0x00000516,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_ADOConnectionConstruction =
    {0x00000551,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) CLSID_Connection =
    {0x00000514,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) CLSID_Record =
    {0x00000560,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_IRecFields =
    {0x00000563,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID__Stream =
    {0x00000565,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) CLSID_Stream =
    {0x00000566,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_ADORecordConstruction =
    {0x00000567,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_ADOStreamConstruction =
    {0x00000568,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_ADOCommandConstruction =
    {0x00000517,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) CLSID_Command =
    {0x00000507,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) CLSID_Recordset =
    {0x00000535,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_ADORecordsetConstruction =
    {0x00000283,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Field15 =
    {0x00000505,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) CLSID_Parameter =
    {0x0000050b,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Command15 =
    {0x00000508,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID__Command =
    {0x0000054e,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Connection15 =
    {0x00000515,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID__Connection =
    {0x00000550,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Recordset15 =
    {0x0000050e,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Recordset20 =
    {0x0000054f,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_Recordset21 =
    {0x00000555,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID__Recordset =
    {0x00000556,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_ConnectionEventsVt =
    {0x00000402,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID_RecordsetEventsVt =
    {0x00000403,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};
extern "C" const GUID __declspec(selectany) IID__Record =
    {0x00000562,0x0000,0x0010,{0x80,0x00,0x00,0xaa,0x00,0x6d,0x2e,0xa4}};

} // namespace ADODB

#pragma pack(pop)
