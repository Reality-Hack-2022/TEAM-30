﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t38199E18DA7F6B6B5830AFCCFC0AB07436023F63;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tD64A140F9C7944189EB92B8FC875A340496404BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.GameObject>>
struct Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_t32C44EFE022E8B3488655D99B41DFF04B2DFF233;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>
struct IReadOnlyList_1_t8E7D506555C39BDC847A5B62DB9413C0E19F9C8A;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_t49F18CA1046C5A2A8F4A41810E82803FCDC70EA8;
// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D;
// System.Collections.Generic.List`1<UnityEngine.Ray>
struct List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.GameObject>
struct TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56;
// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t2842C88EFA2B295F0A328745EE125E87C3E7A82C;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_tE9039D83573FBDFDA760D0DC7609985D879A6905;
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F;
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationSetting[]
struct MixedRealityControllerVisualizationSettingU5BU5D_t45CD97EF551C11F58B9C951983021B7159E5FB31;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController
struct HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40;
// Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition
struct HPMotionControllerDefinition_tFF38ED122E42AFFD10D5901A5834395074B5F34B;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t4B3F81C233038F537CD46AF23300BB3C6B4B1FFA;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273;
// Windows.Perception.People.HeadPose
struct HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t168F62A5236518B8EDAD06AFD6E258EF8B5C0457;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_tD410F25D6080088B842DCB67C0051DF4EC6862A2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider
struct IMixedRealityEyeSaccadeProvider_tD82794910838D91B85CB114C15CFE3665210025A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_t639443EF48CEE257BA4C6391C7112B7390F665FC;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t923212C7B71ADAD3E3C21B99009C9612530D3FE7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition
struct IMixedRealityInputSourceDefinition_t3EBC1E73FEDD698558A1D9B93A30D18EDD45D334;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t96040EB1E30984BEEE1B1302381393D337FD6ABC;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_t68AB7D55F0DA754D6C02996CE17A595FF5B6A34F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer
struct IMixedRealityTeleportPointer_t7085237C47A270884902C56501C1977CC713CFF6;
// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider
struct IWindowsMixedRealityUtilitiesProvider_t27E18004209F3199C1CF1CA34976BD0751242089;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride
struct ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition
struct SimpleHandDefinition_t5E7B267DBE9DFD8C7A4217B7E547A856D6B6DBEB;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB;
// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5;
// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F;
// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136;
// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_t77BE5C8C1EF9B94AAAD851F357D013BABF6B0DFE;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider
struct WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_t88EA6DECA4D02D71B2C00B02938FEED0ABB37434;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_t9D12876746FB188B0A93DA46E92C006BB5FAC38E;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_t5BE2CDEA90C55FF33249F5B95D1A1B8788EC8ED9;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPMotionControllerDefinition_tFF38ED122E42AFFD10D5901A5834395074B5F34B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGazeProviderHeadOverride_t639443EF48CEE257BA4C6391C7112B7390F665FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_t923212C7B71ADAD3E3C21B99009C9612530D3FE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityControllerModelHelpers_t7904588D8CED6BB0064CE8B4F79EFA84140B7B26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleHandDefinition_t5E7B267DBE9DFD8C7A4217B7E547A856D6B6DBEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeType_t2CE84905D8382BA624C83B196C7071951FB80866_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityControllerDefinition_t77BE5C8C1EF9B94AAAD851F357D013BABF6B0DFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKWindowsMixedRealityUtilitiesProvider_t5BE2CDEA90C55FF33249F5B95D1A1B8788EC8ED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t13CC57A50DBF99585F8D926D084FC1AF1D6971B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E;
IL2CPP_EXTERN_C String_t* _stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D;
IL2CPP_EXTERN_C String_t* _stringLiteral2D17FEBF4804F05DE32748DA39E72ABF808EAB75;
IL2CPP_EXTERN_C String_t* _stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478;
IL2CPP_EXTERN_C String_t* _stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9;
IL2CPP_EXTERN_C String_t* _stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6;
IL2CPP_EXTERN_C String_t* _stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B;
IL2CPP_EXTERN_C String_t* _stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE;
IL2CPP_EXTERN_C String_t* _stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163;
IL2CPP_EXTERN_C String_t* _stringLiteralBC2D67D9A3E041B2BCE8FE58FE1742A4A3D569B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mF7E834C898FEF1C1AB730C957D6686BCDB315AA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mB5FECED3CFA225DAE3F1612B6BF81C12F50EAD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m89EAB79F38E5631C2A15525894251C3358EB7334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m4FB891DFBA726FF679D13E30C52E8EFAF4FF1D52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mADE36D682DE1771E1E8151490E75BAA5571FFC0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mC4CA4D47DA78C7E379A3D56A17DC89D6F631D1AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m9AAFAC3D3761E474D8C3633A969D8F100D4BE556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m607AD6B15DB3E1CE7C9CAE0508E3CEAAF2530B59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_m65E251DB9023D2A92E30E1CD2F5407E2114F75C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m38CF0FA4A12079B3A8BAB98E6441E131F65D018C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9B3B3926CD414C582F28FCA4006CA4C5601C745B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mBA3B430C35CBE8EF82E74479E4F2A57CDA7F1ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_m6C822F6C75A4B3E5218E58A23FC08610510FD3A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mE7FCD8643B8A85CBD973E7311C9413784C9AA597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m4B639F3CE37BD1A4FD049599A95561D418E0F9B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mF30D894851FF5FC972AB0DD5AB9476D2BEC171CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m5DFE6DAEB1B85294664AAD7612C96F64F322362B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityEyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__23_0_m035F694231BAA0EAA05661FF4DB36DC6B4DDD010_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKGGVHand_t9D12876746FB188B0A93DA46E92C006BB5FAC38E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IHeadPose_t160C8BC4B0FEC9737493F4B89485C47A49459F30;
struct IPerceptionTimestamp_tB7CFF1E415D1247560EE56A6CB790872EF02BBD3;
struct ISpatialCoordinateSystem_t0B599CF4D7B3B14DA13D87C3A231F9981F3A491A;
struct ISpatialPointerPose_t3977905DE3C4E3EDEF1DAFF3D640067463318239;

struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F;
struct MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2FC1155F3010816792E35065A95ACA95EC224FCC 
{
public:

public:
};

// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct NOVTABLE ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialPointerPoseStatics_TryGetAtTimestamp_m8807730474721435338F5275EDA4D05D4A02A927(ISpatialCoordinateSystem_t0B599CF4D7B3B14DA13D87C3A231F9981F3A491A* ___coordinateSystem0, IPerceptionTimestamp_tB7CFF1E415D1247560EE56A6CB790872EF02BBD3* ___timestamp1, ISpatialPointerPose_t3977905DE3C4E3EDEF1DAFF3D640067463318239** comReturnValue) = 0;
};

// System.Object


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE9039D83573FBDFDA760D0DC7609985D879A6905* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t49F18CA1046C5A2A8F4A41810E82803FCDC70EA8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2842C88EFA2B295F0A328745EE125E87C3E7A82C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB, ___entries_1)); }
	inline EntryU5BU5D_tE9039D83573FBDFDA760D0DC7609985D879A6905* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE9039D83573FBDFDA760D0DC7609985D879A6905** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE9039D83573FBDFDA760D0DC7609985D879A6905* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB, ___keys_7)); }
	inline KeyCollection_t49F18CA1046C5A2A8F4A41810E82803FCDC70EA8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t49F18CA1046C5A2A8F4A41810E82803FCDC70EA8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t49F18CA1046C5A2A8F4A41810E82803FCDC70EA8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB, ___values_8)); }
	inline ValueCollection_t2842C88EFA2B295F0A328745EE125E87C3E7A82C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2842C88EFA2B295F0A328745EE125E87C3E7A82C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2842C88EFA2B295F0A328745EE125E87C3E7A82C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____items_1)); }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* get__items_1() const { return ____items_1; }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_StaticFields, ____emptyArray_5)); }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider
struct WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC  : public RuntimeObject
{
public:
	// Windows.UI.Input.Spatial.SpatialInteractionSource Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::spatialInteractionSource
	SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * ___spatialInteractionSource_0;

public:
	inline static int32_t get_offset_of_spatialInteractionSource_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC, ___spatialInteractionSource_0)); }
	inline SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * get_spatialInteractionSource_0() const { return ___spatialInteractionSource_0; }
	inline SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F ** get_address_of_spatialInteractionSource_0() { return &___spatialInteractionSource_0; }
	inline void set_spatialInteractionSource_0(SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * value)
	{
		___spatialInteractionSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialInteractionSource_0), (void*)value);
	}
};

struct WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::ControllerModelDictionary
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___ControllerModelDictionary_1;

public:
	inline static int32_t get_offset_of_ControllerModelDictionary_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC_StaticFields, ___ControllerModelDictionary_1)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_ControllerModelDictionary_1() const { return ___ControllerModelDictionary_1; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_ControllerModelDictionary_1() { return &___ControllerModelDictionary_1; }
	inline void set_ControllerModelDictionary_1(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___ControllerModelDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ControllerModelDictionary_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_t5BE2CDEA90C55FF33249F5B95D1A1B8788EC8ED9  : public RuntimeObject
{
public:

public:
};


// System.__Il2CppComObject


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>
struct TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B, ___m_task_0)); }
	inline Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.XR.Bone
struct Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 
{
public:
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.XR.Hand
struct Hand_tB64007EC8D01384426C93432737BA9C5F636A690 
{
public:
	// System.UInt64 UnityEngine.XR.Hand::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Hand::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// Windows.Perception.People.HeadPose
struct HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D  : public Il2CppComObject
{
public:

public:
};


// UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC  : public Il2CppComObject
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC  : public Il2CppComObject
{
public:

public:
};

struct SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
	ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialPointerPose"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* get_____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004()
	{
		ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* returnValue = ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
			}
		}
		return returnValue;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_tCDA70490F61E73EABB1C3E2CD2E916418C018443 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_tCDA70490F61E73EABB1C3E2CD2E916418C018443, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tB606C85BE8C41F8EDB09DBC39718C91E7CA874D1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB606C85BE8C41F8EDB09DBC39718C91E7CA874D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.CommonUsages
struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages
struct CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23  : public RuntimeObject
{
public:

public:
};

struct CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___PointerPosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___PointerRotation_1;

public:
	inline static int32_t get_offset_of_PointerPosition_0() { return static_cast<int32_t>(offsetof(CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23_StaticFields, ___PointerPosition_0)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_PointerPosition_0() const { return ___PointerPosition_0; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_PointerPosition_0() { return &___PointerPosition_0; }
	inline void set_PointerPosition_0(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___PointerPosition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerPosition_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_PointerRotation_1() { return static_cast<int32_t>(offsetof(CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23_StaticFields, ___PointerRotation_1)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_PointerRotation_1() const { return ___PointerRotation_1; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_PointerRotation_1() { return &___PointerRotation_1; }
	inline void set_PointerRotation_1(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___PointerRotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerRotation_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct DeviceInputType_tC12C9CEFE6661AB4059AFC960990B7F15FBB5B2F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_tC12C9CEFE6661AB4059AFC960990B7F15FBB5B2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.XR.HandFinger
struct HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35 
{
public:
	// System.Int32 UnityEngine.XR.HandFinger::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t7DEC811DD30F861923A89CE6011693C3FD00F450 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t7DEC811DD30F861923A89CE6011693C3FD00F450, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_t07F0AA4C21CF912137994022185A9CEB0DC0038A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t07F0AA4C21CF912137994022185A9CEB0DC0038A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct MixedRealityCapability_t0E8CDB6F298A97220E7A23EFDB05E5ED9F18672C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_t0E8CDB6F298A97220E7A23EFDB05E5ED9F18672C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_tBD5EECA158921324285270FA4CA73335FACC1408 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_tBD5EECA158921324285270FA4CA73335FACC1408, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct SpatialAwarenessMeshLevelOfDetail_t0B1402043885182FD1DE0C0A6135B1D00002F5CA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_t0B1402043885182FD1DE0C0A6135B1D00002F5CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind
struct SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType
struct SupportedControllerType_tE93760EB923018042AA1198494BCAD205C7F5D16 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SupportedControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedControllerType_tE93760EB923018042AA1198494BCAD205C7F5D16, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_t7A77550CBE01F505D2756B4F0D5A2978A4473339 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t7A77550CBE01F505D2756B4F0D5A2978A4473339, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_t96C3290B2A0194D3BFC33FDBBA047C54CC1F613B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t96C3290B2A0194D3BFC33FDBBA047C54CC1F613B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_t2CE84905D8382BA624C83B196C7071951FB80866 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t2CE84905D8382BA624C83B196C7071951FB80866, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities
struct WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126  : public RuntimeObject
{
public:

public:
};

struct WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::<UtilitiesProvider>k__BackingField
	RuntimeObject* ___U3CUtilitiesProviderU3Ek__BackingField_0;
	// Windows.UI.Input.Spatial.SpatialInteractionManager Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialInteractionManager
	SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * ___spatialInteractionManager_1;
	// System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::currentSpatialCoordinateSystemPtr
	intptr_t ___currentSpatialCoordinateSystemPtr_2;
	// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialCoordinateSystem
	SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___spatialCoordinateSystem_3;

public:
	inline static int32_t get_offset_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_StaticFields, ___U3CUtilitiesProviderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUtilitiesProviderU3Ek__BackingField_0() const { return ___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return &___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline void set_U3CUtilitiesProviderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUtilitiesProviderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUtilitiesProviderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_spatialInteractionManager_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_StaticFields, ___spatialInteractionManager_1)); }
	inline SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * get_spatialInteractionManager_1() const { return ___spatialInteractionManager_1; }
	inline SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 ** get_address_of_spatialInteractionManager_1() { return &___spatialInteractionManager_1; }
	inline void set_spatialInteractionManager_1(SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * value)
	{
		___spatialInteractionManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialInteractionManager_1), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpatialCoordinateSystemPtr_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_StaticFields, ___currentSpatialCoordinateSystemPtr_2)); }
	inline intptr_t get_currentSpatialCoordinateSystemPtr_2() const { return ___currentSpatialCoordinateSystemPtr_2; }
	inline intptr_t* get_address_of_currentSpatialCoordinateSystemPtr_2() { return &___currentSpatialCoordinateSystemPtr_2; }
	inline void set_currentSpatialCoordinateSystemPtr_2(intptr_t value)
	{
		___currentSpatialCoordinateSystemPtr_2 = value;
	}

	inline static int32_t get_offset_of_spatialCoordinateSystem_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_StaticFields, ___spatialCoordinateSystem_3)); }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * get_spatialCoordinateSystem_3() const { return ___spatialCoordinateSystem_3; }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB ** get_address_of_spatialCoordinateSystem_3() { return &___spatialCoordinateSystem_3; }
	inline void set_spatialCoordinateSystem_3(SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * value)
	{
		___spatialCoordinateSystem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialCoordinateSystem_3), (void*)value);
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t38199E18DA7F6B6B5830AFCCFC0AB07436023F63  : public BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject * ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t38199E18DA7F6B6B5830AFCCFC0AB07436023F63, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t38199E18DA7F6B6B5830AFCCFC0AB07436023F63, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject * get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject ** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject * value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// System.Nullable`1<UnityEngine.Ray>
struct Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 
{
public:
	// T System.Nullable`1::value
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963, ___value_0)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_value_0() const { return ___value_0; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C, ___m_result_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_result_22() const { return ___m_result_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::<Definition>k__BackingField
	RuntimeObject* ___U3CDefinitionU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* ___U3CInteractionsU3Ek__BackingField_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CAngularVelocityU3Ek__BackingField_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CVelocityU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CDefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CDefinitionU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CDefinitionU3Ek__BackingField_0() const { return ___U3CDefinitionU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CDefinitionU3Ek__BackingField_0() { return &___U3CDefinitionU3Ek__BackingField_0; }
	inline void set_U3CDefinitionU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CDefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CEnabledU3Ek__BackingField_1() const { return ___U3CEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_1() { return &___U3CEnabledU3Ek__BackingField_1; }
	inline void set_U3CEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CTrackingStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_2() const { return ___U3CTrackingStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_2() { return &___U3CTrackingStateU3Ek__BackingField_2; }
	inline void set_U3CTrackingStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CControllerHandednessU3Ek__BackingField_3)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_3() const { return ___U3CControllerHandednessU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_3() { return &___U3CControllerHandednessU3Ek__BackingField_3; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_3(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CInputSourceU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_4() const { return ___U3CInputSourceU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_4() { return &___U3CInputSourceU3Ek__BackingField_4; }
	inline void set_U3CInputSourceU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CVisualizerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_5() const { return ___U3CVisualizerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_5() { return &___U3CVisualizerU3Ek__BackingField_5; }
	inline void set_U3CVisualizerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CIsPositionAvailableU3Ek__BackingField_6)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_6() const { return ___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return &___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_6(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CIsPositionApproximateU3Ek__BackingField_7)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_7() const { return ___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return &___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_7(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CIsRotationAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_8() const { return ___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return &___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CInteractionsU3Ek__BackingField_9)); }
	inline MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* get_U3CInteractionsU3Ek__BackingField_9() const { return ___U3CInteractionsU3Ek__BackingField_9; }
	inline MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912** get_address_of_U3CInteractionsU3Ek__BackingField_9() { return &___U3CInteractionsU3Ek__BackingField_9; }
	inline void set_U3CInteractionsU3Ek__BackingField_9(MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* value)
	{
		___U3CInteractionsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CAngularVelocityU3Ek__BackingField_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CAngularVelocityU3Ek__BackingField_10() const { return ___U3CAngularVelocityU3Ek__BackingField_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CAngularVelocityU3Ek__BackingField_10() { return &___U3CAngularVelocityU3Ek__BackingField_10; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D, ___U3CVelocityU3Ek__BackingField_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CVelocityU3Ek__BackingField_11() const { return ___U3CVelocityU3Ek__BackingField_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CVelocityU3Ek__BackingField_11() { return &___U3CVelocityU3Ek__BackingField_11; }
	inline void set_U3CVelocityU3Ek__BackingField_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CVelocityU3Ek__BackingField_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition
struct BaseInputSourceDefinition_t6A4ACECB4267A23F578D778E75229184FEC2BC35  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseInputSourceDefinition_t6A4ACECB4267A23F578D778E75229184FEC2BC35, ___U3CHandednessU3Ek__BackingField_0)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_0() const { return ___U3CHandednessU3Ek__BackingField_0; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_0() { return &___U3CHandednessU3Ek__BackingField_0; }
	inline void set_U3CHandednessU3Ek__BackingField_0(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handedness
	uint8_t ___handedness_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::inputSource
	RuntimeObject* ___inputSource_3;
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshObserver
	HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * ___handMeshObserver_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::hasRequestedHandMeshObserver
	bool ___hasRequestedHandMeshObserver_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshModelId
	int32_t ___handMeshModelId_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::neutralPoseVersion
	int32_t ___neutralPoseVersion_7;
	// System.UInt16[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndices
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___handMeshTriangleIndices_8;
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::vertexAndNormals
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___vertexAndNormals_9;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshVerticesUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshVerticesUnity_10;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshNormalsUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshNormalsUnity_11;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndicesUnity
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___handMeshTriangleIndicesUnity_12;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshUVsUnity
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___handMeshUVsUnity_13;
	// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshInfo
	HandMeshInfo_t4B3F81C233038F537CD46AF23300BB3C6B4B1FFA * ___handMeshInfo_15;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::neutralPoseVertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices_16;
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::neutralVertexAndNormals
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___neutralVertexAndNormals_17;

public:
	inline static int32_t get_offset_of_handedness_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___handedness_2)); }
	inline uint8_t get_handedness_2() const { return ___handedness_2; }
	inline uint8_t* get_address_of_handedness_2() { return &___handedness_2; }
	inline void set_handedness_2(uint8_t value)
	{
		___handedness_2 = value;
	}

	inline static int32_t get_offset_of_inputSource_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___inputSource_3)); }
	inline RuntimeObject* get_inputSource_3() const { return ___inputSource_3; }
	inline RuntimeObject** get_address_of_inputSource_3() { return &___inputSource_3; }
	inline void set_inputSource_3(RuntimeObject* value)
	{
		___inputSource_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_3), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshObserver_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___handMeshObserver_4)); }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * get_handMeshObserver_4() const { return ___handMeshObserver_4; }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 ** get_address_of_handMeshObserver_4() { return &___handMeshObserver_4; }
	inline void set_handMeshObserver_4(HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * value)
	{
		___handMeshObserver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshObserver_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasRequestedHandMeshObserver_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___hasRequestedHandMeshObserver_5)); }
	inline bool get_hasRequestedHandMeshObserver_5() const { return ___hasRequestedHandMeshObserver_5; }
	inline bool* get_address_of_hasRequestedHandMeshObserver_5() { return &___hasRequestedHandMeshObserver_5; }
	inline void set_hasRequestedHandMeshObserver_5(bool value)
	{
		___hasRequestedHandMeshObserver_5 = value;
	}

	inline static int32_t get_offset_of_handMeshModelId_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___handMeshModelId_6)); }
	inline int32_t get_handMeshModelId_6() const { return ___handMeshModelId_6; }
	inline int32_t* get_address_of_handMeshModelId_6() { return &___handMeshModelId_6; }
	inline void set_handMeshModelId_6(int32_t value)
	{
		___handMeshModelId_6 = value;
	}

	inline static int32_t get_offset_of_neutralPoseVersion_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___neutralPoseVersion_7)); }
	inline int32_t get_neutralPoseVersion_7() const { return ___neutralPoseVersion_7; }
	inline int32_t* get_address_of_neutralPoseVersion_7() { return &___neutralPoseVersion_7; }
	inline void set_neutralPoseVersion_7(int32_t value)
	{
		___neutralPoseVersion_7 = value;
	}

	inline static int32_t get_offset_of_handMeshTriangleIndices_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___handMeshTriangleIndices_8)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_handMeshTriangleIndices_8() const { return ___handMeshTriangleIndices_8; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_handMeshTriangleIndices_8() { return &___handMeshTriangleIndices_8; }
	inline void set_handMeshTriangleIndices_8(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___handMeshTriangleIndices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndices_8), (void*)value);
	}

	inline static int32_t get_offset_of_vertexAndNormals_9() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___vertexAndNormals_9)); }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* get_vertexAndNormals_9() const { return ___vertexAndNormals_9; }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1** get_address_of_vertexAndNormals_9() { return &___vertexAndNormals_9; }
	inline void set_vertexAndNormals_9(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* value)
	{
		___vertexAndNormals_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexAndNormals_9), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVerticesUnity_10() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___handMeshVerticesUnity_10)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshVerticesUnity_10() const { return ___handMeshVerticesUnity_10; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshVerticesUnity_10() { return &___handMeshVerticesUnity_10; }
	inline void set_handMeshVerticesUnity_10(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshVerticesUnity_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshVerticesUnity_10), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshNormalsUnity_11() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___handMeshNormalsUnity_11)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshNormalsUnity_11() const { return ___handMeshNormalsUnity_11; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshNormalsUnity_11() { return &___handMeshNormalsUnity_11; }
	inline void set_handMeshNormalsUnity_11(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshNormalsUnity_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshNormalsUnity_11), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndicesUnity_12() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___handMeshTriangleIndicesUnity_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_handMeshTriangleIndicesUnity_12() const { return ___handMeshTriangleIndicesUnity_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_handMeshTriangleIndicesUnity_12() { return &___handMeshTriangleIndicesUnity_12; }
	inline void set_handMeshTriangleIndicesUnity_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___handMeshTriangleIndicesUnity_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndicesUnity_12), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshUVsUnity_13() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___handMeshUVsUnity_13)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_handMeshUVsUnity_13() const { return ___handMeshUVsUnity_13; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_handMeshUVsUnity_13() { return &___handMeshUVsUnity_13; }
	inline void set_handMeshUVsUnity_13(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___handMeshUVsUnity_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVsUnity_13), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshInfo_15() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___handMeshInfo_15)); }
	inline HandMeshInfo_t4B3F81C233038F537CD46AF23300BB3C6B4B1FFA * get_handMeshInfo_15() const { return ___handMeshInfo_15; }
	inline HandMeshInfo_t4B3F81C233038F537CD46AF23300BB3C6B4B1FFA ** get_address_of_handMeshInfo_15() { return &___handMeshInfo_15; }
	inline void set_handMeshInfo_15(HandMeshInfo_t4B3F81C233038F537CD46AF23300BB3C6B4B1FFA * value)
	{
		___handMeshInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshInfo_15), (void*)value);
	}

	inline static int32_t get_offset_of_neutralPoseVertices_16() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___neutralPoseVertices_16)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_neutralPoseVertices_16() const { return ___neutralPoseVertices_16; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_neutralPoseVertices_16() { return &___neutralPoseVertices_16; }
	inline void set_neutralPoseVertices_16(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___neutralPoseVertices_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralPoseVertices_16), (void*)value);
	}

	inline static int32_t get_offset_of_neutralVertexAndNormals_17() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2, ___neutralVertexAndNormals_17)); }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* get_neutralVertexAndNormals_17() const { return ___neutralVertexAndNormals_17; }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1** get_address_of_neutralVertexAndNormals_17() { return &___neutralVertexAndNormals_17; }
	inline void set_neutralVertexAndNormals_17(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* value)
	{
		___neutralVertexAndNormals_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralVertexAndNormals_17), (void*)value);
	}
};

struct WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::<Left>k__BackingField
	WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * ___U3CLeftU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::<Right>k__BackingField
	WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * ___U3CRightU3Ek__BackingField_1;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::UpdateHandMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandMeshPerfMarker_14;

public:
	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_StaticFields, ___U3CLeftU3Ek__BackingField_0)); }
	inline WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * get_U3CLeftU3Ek__BackingField_0() const { return ___U3CLeftU3Ek__BackingField_0; }
	inline WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 ** get_address_of_U3CLeftU3Ek__BackingField_0() { return &___U3CLeftU3Ek__BackingField_0; }
	inline void set_U3CLeftU3Ek__BackingField_0(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * value)
	{
		___U3CLeftU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_StaticFields, ___U3CRightU3Ek__BackingField_1)); }
	inline WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * get_U3CRightU3Ek__BackingField_1() const { return ___U3CRightU3Ek__BackingField_1; }
	inline WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 ** get_address_of_U3CRightU3Ek__BackingField_1() { return &___U3CRightU3Ek__BackingField_1; }
	inline void set_U3CRightU3Ek__BackingField_1(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * value)
	{
		___U3CRightU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateHandMeshPerfMarker_14() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_StaticFields, ___UpdateHandMeshPerfMarker_14)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandMeshPerfMarker_14() const { return ___UpdateHandMeshPerfMarker_14; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandMeshPerfMarker_14() { return &___UpdateHandMeshPerfMarker_14; }
	inline void set_UpdateHandMeshPerfMarker_14(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandMeshPerfMarker_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4
struct U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::<>4__this
	WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D, ___U3CU3E4__this_2)); }
	inline WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4
struct U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>4__this
	WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4, ___U3CU3E4__this_2)); }
	inline WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23
struct U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::<>4__this
	WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7, ___U3CU3E4__this_2)); }
	inline WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8
struct U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>4__this
	WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>u__1
	TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE, ___U3CU3E4__this_2)); }
	inline WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0  : public BaseInputSourceDefinition_t6A4ACECB4267A23F578D778E75229184FEC2BC35
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamBackwardTolerance
	float ___cursorBeamBackwardTolerance_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamUpTolerance
	float ___cursorBeamUpTolerance_3;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::unityJointPoses
	Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * ___unityJointPoses_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::currentIndexPose
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___currentIndexPose_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::minimumPinchDistance
	float ___minimumPinchDistance_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::maximumPinchDistance
	float ___maximumPinchDistance_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::enterPinchDistance
	float ___enterPinchDistance_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::exitPinchDistance
	float ___exitPinchDistance_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isPinching
	bool ___isPinching_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isIndexGrabbing
	bool ___isIndexGrabbing_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isMiddleGrabbing
	bool ___isMiddleGrabbing_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isThumbGrabbing
	bool ___isThumbGrabbing_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::previousReadyToTeleport
	bool ___previousReadyToTeleport_16;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::teleportPointer
	RuntimeObject* ___teleportPointer_17;

public:
	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___U3CInputSourceU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_1() const { return ___U3CInputSourceU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_1() { return &___U3CInputSourceU3Ek__BackingField_1; }
	inline void set_U3CInputSourceU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_cursorBeamBackwardTolerance_2() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___cursorBeamBackwardTolerance_2)); }
	inline float get_cursorBeamBackwardTolerance_2() const { return ___cursorBeamBackwardTolerance_2; }
	inline float* get_address_of_cursorBeamBackwardTolerance_2() { return &___cursorBeamBackwardTolerance_2; }
	inline void set_cursorBeamBackwardTolerance_2(float value)
	{
		___cursorBeamBackwardTolerance_2 = value;
	}

	inline static int32_t get_offset_of_cursorBeamUpTolerance_3() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___cursorBeamUpTolerance_3)); }
	inline float get_cursorBeamUpTolerance_3() const { return ___cursorBeamUpTolerance_3; }
	inline float* get_address_of_cursorBeamUpTolerance_3() { return &___cursorBeamUpTolerance_3; }
	inline void set_cursorBeamUpTolerance_3(float value)
	{
		___cursorBeamUpTolerance_3 = value;
	}

	inline static int32_t get_offset_of_unityJointPoses_4() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___unityJointPoses_4)); }
	inline Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * get_unityJointPoses_4() const { return ___unityJointPoses_4; }
	inline Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB ** get_address_of_unityJointPoses_4() { return &___unityJointPoses_4; }
	inline void set_unityJointPoses_4(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * value)
	{
		___unityJointPoses_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndexPose_5() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___currentIndexPose_5)); }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  get_currentIndexPose_5() const { return ___currentIndexPose_5; }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * get_address_of_currentIndexPose_5() { return &___currentIndexPose_5; }
	inline void set_currentIndexPose_5(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  value)
	{
		___currentIndexPose_5 = value;
	}

	inline static int32_t get_offset_of_minimumPinchDistance_6() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___minimumPinchDistance_6)); }
	inline float get_minimumPinchDistance_6() const { return ___minimumPinchDistance_6; }
	inline float* get_address_of_minimumPinchDistance_6() { return &___minimumPinchDistance_6; }
	inline void set_minimumPinchDistance_6(float value)
	{
		___minimumPinchDistance_6 = value;
	}

	inline static int32_t get_offset_of_maximumPinchDistance_7() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___maximumPinchDistance_7)); }
	inline float get_maximumPinchDistance_7() const { return ___maximumPinchDistance_7; }
	inline float* get_address_of_maximumPinchDistance_7() { return &___maximumPinchDistance_7; }
	inline void set_maximumPinchDistance_7(float value)
	{
		___maximumPinchDistance_7 = value;
	}

	inline static int32_t get_offset_of_enterPinchDistance_8() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___enterPinchDistance_8)); }
	inline float get_enterPinchDistance_8() const { return ___enterPinchDistance_8; }
	inline float* get_address_of_enterPinchDistance_8() { return &___enterPinchDistance_8; }
	inline void set_enterPinchDistance_8(float value)
	{
		___enterPinchDistance_8 = value;
	}

	inline static int32_t get_offset_of_exitPinchDistance_9() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___exitPinchDistance_9)); }
	inline float get_exitPinchDistance_9() const { return ___exitPinchDistance_9; }
	inline float* get_address_of_exitPinchDistance_9() { return &___exitPinchDistance_9; }
	inline void set_exitPinchDistance_9(float value)
	{
		___exitPinchDistance_9 = value;
	}

	inline static int32_t get_offset_of_isPinching_10() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___isPinching_10)); }
	inline bool get_isPinching_10() const { return ___isPinching_10; }
	inline bool* get_address_of_isPinching_10() { return &___isPinching_10; }
	inline void set_isPinching_10(bool value)
	{
		___isPinching_10 = value;
	}

	inline static int32_t get_offset_of_isIndexGrabbing_11() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___isIndexGrabbing_11)); }
	inline bool get_isIndexGrabbing_11() const { return ___isIndexGrabbing_11; }
	inline bool* get_address_of_isIndexGrabbing_11() { return &___isIndexGrabbing_11; }
	inline void set_isIndexGrabbing_11(bool value)
	{
		___isIndexGrabbing_11 = value;
	}

	inline static int32_t get_offset_of_isMiddleGrabbing_12() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___isMiddleGrabbing_12)); }
	inline bool get_isMiddleGrabbing_12() const { return ___isMiddleGrabbing_12; }
	inline bool* get_address_of_isMiddleGrabbing_12() { return &___isMiddleGrabbing_12; }
	inline void set_isMiddleGrabbing_12(bool value)
	{
		___isMiddleGrabbing_12 = value;
	}

	inline static int32_t get_offset_of_isThumbGrabbing_13() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___isThumbGrabbing_13)); }
	inline bool get_isThumbGrabbing_13() const { return ___isThumbGrabbing_13; }
	inline bool* get_address_of_isThumbGrabbing_13() { return &___isThumbGrabbing_13; }
	inline void set_isThumbGrabbing_13(bool value)
	{
		___isThumbGrabbing_13 = value;
	}

	inline static int32_t get_offset_of_previousReadyToTeleport_16() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___previousReadyToTeleport_16)); }
	inline bool get_previousReadyToTeleport_16() const { return ___previousReadyToTeleport_16; }
	inline bool* get_address_of_previousReadyToTeleport_16() { return &___previousReadyToTeleport_16; }
	inline void set_previousReadyToTeleport_16(bool value)
	{
		___previousReadyToTeleport_16 = value;
	}

	inline static int32_t get_offset_of_teleportPointer_17() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0, ___teleportPointer_17)); }
	inline RuntimeObject* get_teleportPointer_17() const { return ___teleportPointer_17; }
	inline RuntimeObject** get_address_of_teleportPointer_17() { return &___teleportPointer_17; }
	inline void set_teleportPointer_17(RuntimeObject* value)
	{
		___teleportPointer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportPointer_17), (void*)value);
	}
};

struct ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJointsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandJointsPerfMarker_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPosePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateCurrentIndexPosePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentTeleportPosePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateCurrentTeleportPosePerfMarker_18;

public:
	inline static int32_t get_offset_of_UpdateHandJointsPerfMarker_14() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0_StaticFields, ___UpdateHandJointsPerfMarker_14)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandJointsPerfMarker_14() const { return ___UpdateHandJointsPerfMarker_14; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandJointsPerfMarker_14() { return &___UpdateHandJointsPerfMarker_14; }
	inline void set_UpdateHandJointsPerfMarker_14(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandJointsPerfMarker_14 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentIndexPosePerfMarker_15() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0_StaticFields, ___UpdateCurrentIndexPosePerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateCurrentIndexPosePerfMarker_15() const { return ___UpdateCurrentIndexPosePerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateCurrentIndexPosePerfMarker_15() { return &___UpdateCurrentIndexPosePerfMarker_15; }
	inline void set_UpdateCurrentIndexPosePerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateCurrentIndexPosePerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentTeleportPosePerfMarker_18() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0_StaticFields, ___UpdateCurrentTeleportPosePerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateCurrentTeleportPosePerfMarker_18() const { return ___UpdateCurrentTeleportPosePerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateCurrentTeleportPosePerfMarker_18() { return &___UpdateCurrentTeleportPosePerfMarker_18; }
	inline void set_UpdateCurrentTeleportPosePerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateCurrentTeleportPosePerfMarker_18 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979  : public BaseDataProvider_1_tC0017357CA75C522AD4D10BECAF035491FA45934
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979, ___U3CIsOpaqueU3Ek__BackingField_14)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_14() const { return ___U3CIsOpaqueU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_14() { return &___U3CIsOpaqueU3Ek__BackingField_14; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_14(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6  : public BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * ___activePointersToConfig_17;

public:
	inline static int32_t get_offset_of_enablePointerCache_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___enablePointerCache_14)); }
	inline bool get_enablePointerCache_14() const { return ___enablePointerCache_14; }
	inline bool* get_address_of_enablePointerCache_14() { return &___enablePointerCache_14; }
	inline void set_enablePointerCache_14(bool value)
	{
		___enablePointerCache_14 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___pointerConfigurations_15)); }
	inline PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* get_pointerConfigurations_15() const { return ___pointerConfigurations_15; }
	inline PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C** get_address_of_pointerConfigurations_15() { return &___pointerConfigurations_15; }
	inline void set_pointerConfigurations_15(PointerConfigU5BU5D_tAB402AEBBC6B3D1142E9E6CB11F242801DC4574C* value)
	{
		___pointerConfigurations_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_15), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_17() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6, ___activePointersToConfig_17)); }
	inline Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * get_activePointersToConfig_17() const { return ___activePointersToConfig_17; }
	inline Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D ** get_address_of_activePointersToConfig_17() { return &___activePointersToConfig_17; }
	inline void set_activePointersToConfig_17(Dictionary_2_t40AD0E25A9C651DF2D10B7C03EE5D87856C2A72D * value)
	{
		___activePointersToConfig_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_17), (void*)value);
	}
};

struct BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_20;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___RequestPointersPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_16() const { return ___RequestPointersPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_16() { return &___RequestPointersPerfMarker_16; }
	inline void set_RequestPointersPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_18() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___RecyclePointersPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_18() const { return ___RecyclePointersPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_18() { return &___RecyclePointersPerfMarker_18; }
	inline void set_RecyclePointersPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___CreatePointerPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_19() const { return ___CreatePointerPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_19() { return &___CreatePointerPerfMarker_19; }
	inline void set_CreatePointerPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_20() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_StaticFields, ___CleanActivePointersPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_20() const { return ___CleanActivePointersPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_20() { return &___CleanActivePointersPerfMarker_20; }
	inline void set_CleanActivePointersPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_20 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94  : public BaseDataProvider_1_t7E9A9AAEB867FA4FD304C47C3F2A4F4540D82FBA
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_15;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_20;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CObserverRotationU3Ek__BackingField_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObserverOriginU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObservationExtentsU3Ek__BackingField_24;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CSourceIdU3Ek__BackingField_15)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_15() const { return ___U3CSourceIdU3Ek__BackingField_15; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_15() { return &___U3CSourceIdU3Ek__BackingField_15; }
	inline void set_U3CSourceIdU3Ek__BackingField_15(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CSourceNameU3Ek__BackingField_16)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_16() const { return ___U3CSourceNameU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_16() { return &___U3CSourceNameU3Ek__BackingField_16; }
	inline void set_U3CSourceNameU3Ek__BackingField_16(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CStartupBehaviorU3Ek__BackingField_17)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_17() const { return ___U3CStartupBehaviorU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_17() { return &___U3CStartupBehaviorU3Ek__BackingField_17; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_17(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CDefaultPhysicsLayerU3Ek__BackingField_18)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_18() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_18() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_18; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_18(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CIsRunningU3Ek__BackingField_19)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_19() const { return ___U3CIsRunningU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_19() { return &___U3CIsRunningU3Ek__BackingField_19; }
	inline void set_U3CIsRunningU3Ek__BackingField_19(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CIsStationaryObserverU3Ek__BackingField_20)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_20() const { return ___U3CIsStationaryObserverU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_20() { return &___U3CIsStationaryObserverU3Ek__BackingField_20; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_20(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObserverRotationU3Ek__BackingField_21)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CObserverRotationU3Ek__BackingField_21() const { return ___U3CObserverRotationU3Ek__BackingField_21; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CObserverRotationU3Ek__BackingField_21() { return &___U3CObserverRotationU3Ek__BackingField_21; }
	inline void set_U3CObserverRotationU3Ek__BackingField_21(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CObserverRotationU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObserverOriginU3Ek__BackingField_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObserverOriginU3Ek__BackingField_22() const { return ___U3CObserverOriginU3Ek__BackingField_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObserverOriginU3Ek__BackingField_22() { return &___U3CObserverOriginU3Ek__BackingField_22; }
	inline void set_U3CObserverOriginU3Ek__BackingField_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObserverOriginU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObserverVolumeTypeU3Ek__BackingField_23)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_23() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_23() { return &___U3CObserverVolumeTypeU3Ek__BackingField_23; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_23(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CObservationExtentsU3Ek__BackingField_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObservationExtentsU3Ek__BackingField_24() const { return ___U3CObservationExtentsU3Ek__BackingField_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObservationExtentsU3Ek__BackingField_24() { return &___U3CObservationExtentsU3Ek__BackingField_24; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94, ___U3CUpdateIntervalU3Ek__BackingField_25)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_25() const { return ___U3CUpdateIntervalU3Ek__BackingField_25; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_25() { return &___U3CUpdateIntervalU3Ek__BackingField_25; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_25(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_25 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48  : public RuntimeObject
{
public:
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_1;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::smoothFactorNormalized
	float ___smoothFactorNormalized_3;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccadeThreshInDegree
	float ___saccadeThreshInDegree_4;
	// System.Nullable`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::oldGaze
	Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  ___oldGaze_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::confidenceOfSaccade
	int32_t ___confidenceOfSaccade_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::confidenceOfSaccadeThreshold
	int32_t ___confidenceOfSaccadeThreshold_7;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccade_initialGazePoint
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___saccade_initialGazePoint_8;
	// System.Collections.Generic.List`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccade_newGazeCluster
	List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * ___saccade_newGazeCluster_9;

public:
	inline static int32_t get_offset_of_OnSaccade_0() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48, ___OnSaccade_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_0() const { return ___OnSaccade_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_0() { return &___OnSaccade_0; }
	inline void set_OnSaccade_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_1() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48, ___OnSaccadeX_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_1() const { return ___OnSaccadeX_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_1() { return &___OnSaccadeX_1; }
	inline void set_OnSaccadeX_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_2() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48, ___OnSaccadeY_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_2() const { return ___OnSaccadeY_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_2() { return &___OnSaccadeY_2; }
	inline void set_OnSaccadeY_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_2), (void*)value);
	}

	inline static int32_t get_offset_of_smoothFactorNormalized_3() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48, ___smoothFactorNormalized_3)); }
	inline float get_smoothFactorNormalized_3() const { return ___smoothFactorNormalized_3; }
	inline float* get_address_of_smoothFactorNormalized_3() { return &___smoothFactorNormalized_3; }
	inline void set_smoothFactorNormalized_3(float value)
	{
		___smoothFactorNormalized_3 = value;
	}

	inline static int32_t get_offset_of_saccadeThreshInDegree_4() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48, ___saccadeThreshInDegree_4)); }
	inline float get_saccadeThreshInDegree_4() const { return ___saccadeThreshInDegree_4; }
	inline float* get_address_of_saccadeThreshInDegree_4() { return &___saccadeThreshInDegree_4; }
	inline void set_saccadeThreshInDegree_4(float value)
	{
		___saccadeThreshInDegree_4 = value;
	}

	inline static int32_t get_offset_of_oldGaze_5() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48, ___oldGaze_5)); }
	inline Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  get_oldGaze_5() const { return ___oldGaze_5; }
	inline Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 * get_address_of_oldGaze_5() { return &___oldGaze_5; }
	inline void set_oldGaze_5(Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  value)
	{
		___oldGaze_5 = value;
	}

	inline static int32_t get_offset_of_confidenceOfSaccade_6() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48, ___confidenceOfSaccade_6)); }
	inline int32_t get_confidenceOfSaccade_6() const { return ___confidenceOfSaccade_6; }
	inline int32_t* get_address_of_confidenceOfSaccade_6() { return &___confidenceOfSaccade_6; }
	inline void set_confidenceOfSaccade_6(int32_t value)
	{
		___confidenceOfSaccade_6 = value;
	}

	inline static int32_t get_offset_of_confidenceOfSaccadeThreshold_7() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48, ___confidenceOfSaccadeThreshold_7)); }
	inline int32_t get_confidenceOfSaccadeThreshold_7() const { return ___confidenceOfSaccadeThreshold_7; }
	inline int32_t* get_address_of_confidenceOfSaccadeThreshold_7() { return &___confidenceOfSaccadeThreshold_7; }
	inline void set_confidenceOfSaccadeThreshold_7(int32_t value)
	{
		___confidenceOfSaccadeThreshold_7 = value;
	}

	inline static int32_t get_offset_of_saccade_initialGazePoint_8() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48, ___saccade_initialGazePoint_8)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_saccade_initialGazePoint_8() const { return ___saccade_initialGazePoint_8; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_saccade_initialGazePoint_8() { return &___saccade_initialGazePoint_8; }
	inline void set_saccade_initialGazePoint_8(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___saccade_initialGazePoint_8 = value;
	}

	inline static int32_t get_offset_of_saccade_newGazeCluster_9() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48, ___saccade_newGazeCluster_9)); }
	inline List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * get_saccade_newGazeCluster_9() const { return ___saccade_newGazeCluster_9; }
	inline List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B ** get_address_of_saccade_newGazeCluster_9() { return &___saccade_newGazeCluster_9; }
	inline void set_saccade_newGazeCluster_9(List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * value)
	{
		___saccade_newGazeCluster_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saccade_newGazeCluster_9), (void*)value);
	}
};

struct EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::SmoothGazePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SmoothGazePerfMarker_10;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::IsSaccadingPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsSaccadingPerfMarker_11;

public:
	inline static int32_t get_offset_of_SmoothGazePerfMarker_10() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48_StaticFields, ___SmoothGazePerfMarker_10)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SmoothGazePerfMarker_10() const { return ___SmoothGazePerfMarker_10; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SmoothGazePerfMarker_10() { return &___SmoothGazePerfMarker_10; }
	inline void set_SmoothGazePerfMarker_10(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SmoothGazePerfMarker_10 = value;
	}

	inline static int32_t get_offset_of_IsSaccadingPerfMarker_11() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48_StaticFields, ___IsSaccadingPerfMarker_11)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsSaccadingPerfMarker_11() const { return ___IsSaccadingPerfMarker_11; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsSaccadingPerfMarker_11() { return &___IsSaccadingPerfMarker_11; }
	inline void set_IsSaccadingPerfMarker_11(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsSaccadingPerfMarker_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368  : public BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPose
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___CurrentControllerPose_12;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::LastControllerPose
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___LastControllerPose_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CurrentControllerPosition_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___CurrentControllerRotation_15;
	// UnityEngine.XR.InputDevice Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::lastInputDevice
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___lastInputDevice_16;

public:
	inline static int32_t get_offset_of_CurrentControllerPose_12() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368, ___CurrentControllerPose_12)); }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  get_CurrentControllerPose_12() const { return ___CurrentControllerPose_12; }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * get_address_of_CurrentControllerPose_12() { return &___CurrentControllerPose_12; }
	inline void set_CurrentControllerPose_12(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  value)
	{
		___CurrentControllerPose_12 = value;
	}

	inline static int32_t get_offset_of_LastControllerPose_13() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368, ___LastControllerPose_13)); }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  get_LastControllerPose_13() const { return ___LastControllerPose_13; }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * get_address_of_LastControllerPose_13() { return &___LastControllerPose_13; }
	inline void set_LastControllerPose_13(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  value)
	{
		___LastControllerPose_13 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPosition_14() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368, ___CurrentControllerPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CurrentControllerPosition_14() const { return ___CurrentControllerPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CurrentControllerPosition_14() { return &___CurrentControllerPosition_14; }
	inline void set_CurrentControllerPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CurrentControllerPosition_14 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerRotation_15() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368, ___CurrentControllerRotation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_CurrentControllerRotation_15() const { return ___CurrentControllerRotation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_CurrentControllerRotation_15() { return &___CurrentControllerRotation_15; }
	inline void set_CurrentControllerRotation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___CurrentControllerRotation_15 = value;
	}

	inline static int32_t get_offset_of_lastInputDevice_16() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368, ___lastInputDevice_16)); }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  get_lastInputDevice_16() const { return ___lastInputDevice_16; }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * get_address_of_lastInputDevice_16() { return &___lastInputDevice_16; }
	inline void set_lastInputDevice_16(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		___lastInputDevice_16 = value;
	}
};

struct GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSourceDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateSourceDataPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateVelocityPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateVelocityPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateButtonDataPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateSingleAxisDataPerfMarker_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateDualAxisDataPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_23;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_17() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368_StaticFields, ___UpdateControllerPerfMarker_17)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_17() const { return ___UpdateControllerPerfMarker_17; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_17() { return &___UpdateControllerPerfMarker_17; }
	inline void set_UpdateControllerPerfMarker_17(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_17 = value;
	}

	inline static int32_t get_offset_of_UpdateSourceDataPerfMarker_18() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368_StaticFields, ___UpdateSourceDataPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateSourceDataPerfMarker_18() const { return ___UpdateSourceDataPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateSourceDataPerfMarker_18() { return &___UpdateSourceDataPerfMarker_18; }
	inline void set_UpdateSourceDataPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateSourceDataPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_UpdateVelocityPerfMarker_19() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368_StaticFields, ___UpdateVelocityPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateVelocityPerfMarker_19() const { return ___UpdateVelocityPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateVelocityPerfMarker_19() { return &___UpdateVelocityPerfMarker_19; }
	inline void set_UpdateVelocityPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateVelocityPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_20() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368_StaticFields, ___UpdateButtonDataPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateButtonDataPerfMarker_20() const { return ___UpdateButtonDataPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateButtonDataPerfMarker_20() { return &___UpdateButtonDataPerfMarker_20; }
	inline void set_UpdateButtonDataPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateButtonDataPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_UpdateSingleAxisDataPerfMarker_21() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368_StaticFields, ___UpdateSingleAxisDataPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateSingleAxisDataPerfMarker_21() const { return ___UpdateSingleAxisDataPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateSingleAxisDataPerfMarker_21() { return &___UpdateSingleAxisDataPerfMarker_21; }
	inline void set_UpdateSingleAxisDataPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateSingleAxisDataPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_22() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368_StaticFields, ___UpdateDualAxisDataPerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateDualAxisDataPerfMarker_22() const { return ___UpdateDualAxisDataPerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateDualAxisDataPerfMarker_22() { return &___UpdateDualAxisDataPerfMarker_22; }
	inline void set_UpdateDualAxisDataPerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateDualAxisDataPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_23() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368_StaticFields, ___UpdatePoseDataPerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_23() const { return ___UpdatePoseDataPerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_23() { return &___UpdatePoseDataPerfMarker_23; }
	inline void set_UpdatePoseDataPerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_23 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition
struct HPMotionControllerDefinition_tFF38ED122E42AFFD10D5901A5834395074B5F34B  : public BaseInputSourceDefinition_t6A4ACECB4267A23F578D778E75229184FEC2BC35
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___inputAction_4)); }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___vector2Data_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___positionData_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___rotationData_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC, ___poseData_17)); }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  value)
	{
		___poseData_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition
struct SimpleHandDefinition_t5E7B267DBE9DFD8C7A4217B7E547A856D6B6DBEB  : public BaseInputSourceDefinition_t6A4ACECB4267A23F578D778E75229184FEC2BC35
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_t77BE5C8C1EF9B94AAAD851F357D013BABF6B0DFE  : public BaseInputSourceDefinition_t6A4ACECB4267A23F578D778E75229184FEC2BC35
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63  : public IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8  : public BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740  : public BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E * ___meshEventData_26;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___observedObjectParent_27;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_37;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_38;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B * ___meshes_39;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_41;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMaterial_43;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___physicsMaterial_44;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___visibleMaterial_45;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::runtimeSpatialMeshPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___runtimeSpatialMeshPrefab_46;

public:
	inline static int32_t get_offset_of_meshEventData_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___meshEventData_26)); }
	inline MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E * get_meshEventData_26() const { return ___meshEventData_26; }
	inline MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E ** get_address_of_meshEventData_26() { return &___meshEventData_26; }
	inline void set_meshEventData_26(MixedRealitySpatialAwarenessEventData_1_tF7D69DC7933E29CC1550C477DDCEBB80CBDF9A9E * value)
	{
		___meshEventData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_26), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___observedObjectParent_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_observedObjectParent_27() const { return ___observedObjectParent_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_observedObjectParent_27() { return &___observedObjectParent_27; }
	inline void set_observedObjectParent_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___observedObjectParent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_27), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___displayOption_37)); }
	inline int32_t get_displayOption_37() const { return ___displayOption_37; }
	inline int32_t* get_address_of_displayOption_37() { return &___displayOption_37; }
	inline void set_displayOption_37(int32_t value)
	{
		___displayOption_37 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___levelOfDetail_38)); }
	inline int32_t get_levelOfDetail_38() const { return ___levelOfDetail_38; }
	inline int32_t* get_address_of_levelOfDetail_38() { return &___levelOfDetail_38; }
	inline void set_levelOfDetail_38(int32_t value)
	{
		___levelOfDetail_38 = value;
	}

	inline static int32_t get_offset_of_meshes_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___meshes_39)); }
	inline Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B * get_meshes_39() const { return ___meshes_39; }
	inline Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B ** get_address_of_meshes_39() { return &___meshes_39; }
	inline void set_meshes_39(Dictionary_2_tBFEF92C709D6CF5C8220E4553DF6064FCB30A49B * value)
	{
		___meshes_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_39), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_40() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___meshPhysicsLayer_40)); }
	inline int32_t get_meshPhysicsLayer_40() const { return ___meshPhysicsLayer_40; }
	inline int32_t* get_address_of_meshPhysicsLayer_40() { return &___meshPhysicsLayer_40; }
	inline void set_meshPhysicsLayer_40(int32_t value)
	{
		___meshPhysicsLayer_40 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___U3CRecalculateNormalsU3Ek__BackingField_41)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_41() const { return ___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return &___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_41(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_42(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_43() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___occlusionMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMaterial_43() const { return ___occlusionMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMaterial_43() { return &___occlusionMaterial_43; }
	inline void set_occlusionMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_44() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___physicsMaterial_44)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_physicsMaterial_44() const { return ___physicsMaterial_44; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_physicsMaterial_44() { return &___physicsMaterial_44; }
	inline void set_physicsMaterial_44(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___physicsMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_45() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___visibleMaterial_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_visibleMaterial_45() const { return ___visibleMaterial_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_visibleMaterial_45() { return &___visibleMaterial_45; }
	inline void set_visibleMaterial_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___visibleMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_runtimeSpatialMeshPrefab_46() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740, ___runtimeSpatialMeshPrefab_46)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_runtimeSpatialMeshPrefab_46() const { return ___runtimeSpatialMeshPrefab_46; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_runtimeSpatialMeshPrefab_46() { return &___runtimeSpatialMeshPrefab_46; }
	inline void set_runtimeSpatialMeshPrefab_46(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___runtimeSpatialMeshPrefab_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeSpatialMeshPrefab_46), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshPhysicsPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedPhysicsLayerPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshAddedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * ___OnMeshAdded_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshUpdatedPerfMarker_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * ___OnMeshUpdated_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshRemovedPerfMarker_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * ___OnMeshRemoved_36;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_28() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshPhysicsPerfMarker_29() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return &___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedPhysicsLayerPerfMarker_30() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return &___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshAddedPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshAddedPerfMarker_31() const { return ___OnMeshAddedPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshAddedPerfMarker_31() { return &___OnMeshAddedPerfMarker_31; }
	inline void set_OnMeshAddedPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshAddedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshAdded_32)); }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * get_OnMeshAdded_32() const { return ___OnMeshAdded_32; }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E ** get_address_of_OnMeshAdded_32() { return &___OnMeshAdded_32; }
	inline void set_OnMeshAdded_32(EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * value)
	{
		___OnMeshAdded_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshUpdatedPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshUpdatedPerfMarker_33() const { return ___OnMeshUpdatedPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshUpdatedPerfMarker_33() { return &___OnMeshUpdatedPerfMarker_33; }
	inline void set_OnMeshUpdatedPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshUpdatedPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshUpdated_34)); }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * get_OnMeshUpdated_34() const { return ___OnMeshUpdated_34; }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E ** get_address_of_OnMeshUpdated_34() { return &___OnMeshUpdated_34; }
	inline void set_OnMeshUpdated_34(EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * value)
	{
		___OnMeshUpdated_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshRemovedPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshRemovedPerfMarker_35() const { return ___OnMeshRemovedPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshRemovedPerfMarker_35() { return &___OnMeshRemovedPerfMarker_35; }
	inline void set_OnMeshRemovedPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshRemovedPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740_StaticFields, ___OnMeshRemoved_36)); }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * get_OnMeshRemoved_36() const { return ___OnMeshRemoved_36; }
	inline EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E ** get_address_of_OnMeshRemoved_36() { return &___OnMeshRemoved_36; }
	inline void set_OnMeshRemoved_36(EventFunction_1_t6E607F251F21D260A8CF479A2016C69BE32BF24E * value)
	{
		___OnMeshRemoved_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_36), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98  : public BaseCameraSettingsProvider_t499DB82132811BA940D9337482403F79CA08D979
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_t88EA6DECA4D02D71B2C00B02938FEED0ABB37434 * ___reprojectionUpdater_16;
	// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::projectionOverride
	ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 * ___projectionOverride_17;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_16() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98, ___reprojectionUpdater_16)); }
	inline WindowsMixedRealityReprojectionUpdater_t88EA6DECA4D02D71B2C00B02938FEED0ABB37434 * get_reprojectionUpdater_16() const { return ___reprojectionUpdater_16; }
	inline WindowsMixedRealityReprojectionUpdater_t88EA6DECA4D02D71B2C00B02938FEED0ABB37434 ** get_address_of_reprojectionUpdater_16() { return &___reprojectionUpdater_16; }
	inline void set_reprojectionUpdater_16(WindowsMixedRealityReprojectionUpdater_t88EA6DECA4D02D71B2C00B02938FEED0ABB37434 * value)
	{
		___reprojectionUpdater_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_16), (void*)value);
	}

	inline static int32_t get_offset_of_projectionOverride_17() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98, ___projectionOverride_17)); }
	inline ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 * get_projectionOverride_17() const { return ___projectionOverride_17; }
	inline ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 ** get_address_of_projectionOverride_17() { return &___projectionOverride_17; }
	inline void set_projectionOverride_17(ProjectionOverride_t4DF569F4323CCAE299E1DF0A1EAC2D923195FFC4 * value)
	{
		___projectionOverride_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionOverride_17), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_15;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_15() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98_StaticFields, ___isTryGetViewConfigurationSupported_15)); }
	inline bool get_isTryGetViewConfigurationSupported_15() const { return ___isTryGetViewConfigurationSupported_15; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_15() { return &___isTryGetViewConfigurationSupported_15; }
	inline void set_isTryGetViewConfigurationSupported_15(bool value)
	{
		___isTryGetViewConfigurationSupported_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB  : public GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPointerPosition_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentPointerRotation_25;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPose
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___currentPointerPose_26;

public:
	inline static int32_t get_offset_of_currentPointerPosition_24() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB, ___currentPointerPosition_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentPointerPosition_24() const { return ___currentPointerPosition_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentPointerPosition_24() { return &___currentPointerPosition_24; }
	inline void set_currentPointerPosition_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentPointerPosition_24 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_25() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB, ___currentPointerRotation_25)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_currentPointerRotation_25() const { return ___currentPointerRotation_25; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_currentPointerRotation_25() { return &___currentPointerRotation_25; }
	inline void set_currentPointerRotation_25(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___currentPointerRotation_25 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_26() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB, ___currentPointerPose_26)); }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  get_currentPointerPose_26() const { return ___currentPointerPose_26; }
	inline MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * get_address_of_currentPointerPose_26() { return &___currentPointerPose_26; }
	inline void set_currentPointerPose_26(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  value)
	{
		___currentPointerPose_26 = value;
	}
};

struct BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_27;

public:
	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_27() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_StaticFields, ___UpdatePoseDataPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_27() const { return ___UpdatePoseDataPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_27() { return &___UpdatePoseDataPerfMarker_27; }
	inline void set_UpdatePoseDataPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_27 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111  : public BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::renderMotionControllers
	bool ___renderMotionControllers_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::defaultControllerVisualizationType
	SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * ___defaultControllerVisualizationType_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::usePlatformModels
	bool ___usePlatformModels_7;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::platformModelMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___platformModelMaterial_8;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalLeftControllerModel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalLeftControllerModel_9;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalRightControllerModel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalRightControllerModel_10;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalLeftHandVisualizer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalLeftHandVisualizer_11;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalRightHandVisualizer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalRightHandVisualizer_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationSetting[] Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::controllerVisualizationSettings
	MixedRealityControllerVisualizationSettingU5BU5D_t45CD97EF551C11F58B9C951983021B7159E5FB31* ___controllerVisualizationSettings_13;

public:
	inline static int32_t get_offset_of_renderMotionControllers_5() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111, ___renderMotionControllers_5)); }
	inline bool get_renderMotionControllers_5() const { return ___renderMotionControllers_5; }
	inline bool* get_address_of_renderMotionControllers_5() { return &___renderMotionControllers_5; }
	inline void set_renderMotionControllers_5(bool value)
	{
		___renderMotionControllers_5 = value;
	}

	inline static int32_t get_offset_of_defaultControllerVisualizationType_6() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111, ___defaultControllerVisualizationType_6)); }
	inline SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * get_defaultControllerVisualizationType_6() const { return ___defaultControllerVisualizationType_6; }
	inline SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E ** get_address_of_defaultControllerVisualizationType_6() { return &___defaultControllerVisualizationType_6; }
	inline void set_defaultControllerVisualizationType_6(SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * value)
	{
		___defaultControllerVisualizationType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultControllerVisualizationType_6), (void*)value);
	}

	inline static int32_t get_offset_of_usePlatformModels_7() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111, ___usePlatformModels_7)); }
	inline bool get_usePlatformModels_7() const { return ___usePlatformModels_7; }
	inline bool* get_address_of_usePlatformModels_7() { return &___usePlatformModels_7; }
	inline void set_usePlatformModels_7(bool value)
	{
		___usePlatformModels_7 = value;
	}

	inline static int32_t get_offset_of_platformModelMaterial_8() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111, ___platformModelMaterial_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_platformModelMaterial_8() const { return ___platformModelMaterial_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_platformModelMaterial_8() { return &___platformModelMaterial_8; }
	inline void set_platformModelMaterial_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___platformModelMaterial_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platformModelMaterial_8), (void*)value);
	}

	inline static int32_t get_offset_of_globalLeftControllerModel_9() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111, ___globalLeftControllerModel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalLeftControllerModel_9() const { return ___globalLeftControllerModel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalLeftControllerModel_9() { return &___globalLeftControllerModel_9; }
	inline void set_globalLeftControllerModel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalLeftControllerModel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalLeftControllerModel_9), (void*)value);
	}

	inline static int32_t get_offset_of_globalRightControllerModel_10() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111, ___globalRightControllerModel_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalRightControllerModel_10() const { return ___globalRightControllerModel_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalRightControllerModel_10() { return &___globalRightControllerModel_10; }
	inline void set_globalRightControllerModel_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalRightControllerModel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalRightControllerModel_10), (void*)value);
	}

	inline static int32_t get_offset_of_globalLeftHandVisualizer_11() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111, ___globalLeftHandVisualizer_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalLeftHandVisualizer_11() const { return ___globalLeftHandVisualizer_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalLeftHandVisualizer_11() { return &___globalLeftHandVisualizer_11; }
	inline void set_globalLeftHandVisualizer_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalLeftHandVisualizer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalLeftHandVisualizer_11), (void*)value);
	}

	inline static int32_t get_offset_of_globalRightHandVisualizer_12() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111, ___globalRightHandVisualizer_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalRightHandVisualizer_12() const { return ___globalRightHandVisualizer_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalRightHandVisualizer_12() { return &___globalRightHandVisualizer_12; }
	inline void set_globalRightHandVisualizer_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalRightHandVisualizer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalRightHandVisualizer_12), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationSettings_13() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111, ___controllerVisualizationSettings_13)); }
	inline MixedRealityControllerVisualizationSettingU5BU5D_t45CD97EF551C11F58B9C951983021B7159E5FB31* get_controllerVisualizationSettings_13() const { return ___controllerVisualizationSettings_13; }
	inline MixedRealityControllerVisualizationSettingU5BU5D_t45CD97EF551C11F58B9C951983021B7159E5FB31** get_address_of_controllerVisualizationSettings_13() { return &___controllerVisualizationSettings_13; }
	inline void set_controllerVisualizationSettings_13(MixedRealityControllerVisualizationSettingU5BU5D_t45CD97EF551C11F58B9C951983021B7159E5FB31* value)
	{
		___controllerVisualizationSettings_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationSettings_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68  : public BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::<SmoothEyeTracking>k__BackingField
	bool ___U3CSmoothEyeTrackingU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::gazeSmoother
	EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * ___gazeSmoother_22;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_23;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_24;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_25;

public:
	inline static int32_t get_offset_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68, ___U3CSmoothEyeTrackingU3Ek__BackingField_21)); }
	inline bool get_U3CSmoothEyeTrackingU3Ek__BackingField_21() const { return ___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return &___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline void set_U3CSmoothEyeTrackingU3Ek__BackingField_21(bool value)
	{
		___U3CSmoothEyeTrackingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_gazeSmoother_22() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68, ___gazeSmoother_22)); }
	inline EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * get_gazeSmoother_22() const { return ___gazeSmoother_22; }
	inline EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 ** get_address_of_gazeSmoother_22() { return &___gazeSmoother_22; }
	inline void set_gazeSmoother_22(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * value)
	{
		___gazeSmoother_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeSmoother_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccade_23() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68, ___OnSaccade_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_23() const { return ___OnSaccade_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_23() { return &___OnSaccade_23; }
	inline void set_OnSaccade_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_24() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68, ___OnSaccadeX_24)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_24() const { return ___OnSaccadeX_24; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_24() { return &___OnSaccadeX_24; }
	inline void set_OnSaccadeX_24(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_24), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68, ___OnSaccadeY_25)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_25() const { return ___OnSaccadeY_25; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_25() { return &___OnSaccadeY_25; }
	inline void set_OnSaccadeY_25(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_25), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD  : public BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevicesSubset_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___lastInputDevices_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_inputDevices_22() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___inputDevices_22)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevices_22() const { return ___inputDevices_22; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevices_22() { return &___inputDevices_22; }
	inline void set_inputDevices_22(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevices_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_22), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_23() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___inputDevicesSubset_23)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevicesSubset_23() const { return ___inputDevicesSubset_23; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevicesSubset_23() { return &___inputDevicesSubset_23; }
	inline void set_inputDevicesSubset_23(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevicesSubset_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_23), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_24() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___lastInputDevices_24)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_lastInputDevices_24() const { return ___lastInputDevices_24; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_lastInputDevices_24() { return &___lastInputDevices_24; }
	inline void set_lastInputDevices_24(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___lastInputDevices_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD, ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() const { return ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return &___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline void set_U3CDesiredInputCharacteristicsU3Ek__BackingField_25(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___U3CDesiredInputCharacteristicsU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDesiredInputCharacteristicsU3Ek__BackingField_25), (void*)value);
	}
};

struct XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * ___ActiveControllers_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_28;

public:
	inline static int32_t get_offset_of_ActiveControllers_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___ActiveControllers_21)); }
	inline Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * get_ActiveControllers_21() const { return ___ActiveControllers_21; }
	inline Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF ** get_address_of_ActiveControllers_21() { return &___ActiveControllers_21; }
	inline void set_ActiveControllers_21(Dictionary_2_tA0FD2AFAAFE4AEDFD84AEE2B7DA1E4180E174DBF * value)
	{
		___ActiveControllers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_21), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_27() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___GetOrAddControllerPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_27() const { return ___GetOrAddControllerPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_27() { return &___GetOrAddControllerPerfMarker_27; }
	inline void set_GetOrAddControllerPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_28() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_StaticFields, ___RemoveControllerPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_28() const { return ___RemoveControllerPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_28() { return &___RemoveControllerPerfMarker_28; }
	inline void set_RemoveControllerPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6  : public BaseSpatialMeshObserver_tCF4769C1503211D10D446F943142BF14DC571740
{
public:
	// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::observersCache
	RuntimeObject* ___observersCache_47;
	// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshSubsystem
	XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * ___meshSubsystem_48;
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * ___meshWorkQueue_50;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos_51;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * ___outstandingMeshObject_52;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * ___spareMeshObject_53;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_63;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_64;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_65;

public:
	inline static int32_t get_offset_of_observersCache_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___observersCache_47)); }
	inline RuntimeObject* get_observersCache_47() const { return ___observersCache_47; }
	inline RuntimeObject** get_address_of_observersCache_47() { return &___observersCache_47; }
	inline void set_observersCache_47(RuntimeObject* value)
	{
		___observersCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observersCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_meshSubsystem_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___meshSubsystem_48)); }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * get_meshSubsystem_48() const { return ___meshSubsystem_48; }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 ** get_address_of_meshSubsystem_48() { return &___meshSubsystem_48; }
	inline void set_meshSubsystem_48(XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * value)
	{
		___meshSubsystem_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshSubsystem_48), (void*)value);
	}

	inline static int32_t get_offset_of_meshWorkQueue_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___meshWorkQueue_50)); }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * get_meshWorkQueue_50() const { return ___meshWorkQueue_50; }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B ** get_address_of_meshWorkQueue_50() { return &___meshWorkQueue_50; }
	inline void set_meshWorkQueue_50(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * value)
	{
		___meshWorkQueue_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_50), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___meshInfos_51)); }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * get_meshInfos_51() const { return ___meshInfos_51; }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D ** get_address_of_meshInfos_51() { return &___meshInfos_51; }
	inline void set_meshInfos_51(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * value)
	{
		___meshInfos_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_51), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___outstandingMeshObject_52)); }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * get_outstandingMeshObject_52() const { return ___outstandingMeshObject_52; }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 ** get_address_of_outstandingMeshObject_52() { return &___outstandingMeshObject_52; }
	inline void set_outstandingMeshObject_52(SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * value)
	{
		___outstandingMeshObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_52), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___spareMeshObject_53)); }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * get_spareMeshObject_53() const { return ___spareMeshObject_53; }
	inline SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 ** get_address_of_spareMeshObject_53() { return &___spareMeshObject_53; }
	inline void set_spareMeshObject_53(SpatialAwarenessMeshObject_t714D18632EDCC5238156A908F5F8132BF0291944 * value)
	{
		___spareMeshObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___lastUpdated_54)); }
	inline float get_lastUpdated_54() const { return ___lastUpdated_54; }
	inline float* get_address_of_lastUpdated_54() { return &___lastUpdated_54; }
	inline void set_lastUpdated_54(float value)
	{
		___lastUpdated_54 = value;
	}

	inline static int32_t get_offset_of_oldObserverOrigin_63() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___oldObserverOrigin_63)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_63() const { return ___oldObserverOrigin_63; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_63() { return &___oldObserverOrigin_63; }
	inline void set_oldObserverOrigin_63(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_63 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_64() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___oldObservationExtents_64)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_64() const { return ___oldObservationExtents_64; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_64() { return &___oldObservationExtents_64; }
	inline void set_oldObservationExtents_64(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_64 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_65() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6, ___oldObserverVolumeType_65)); }
	inline int32_t get_oldObserverVolumeType_65() const { return ___oldObserverVolumeType_65; }
	inline int32_t* get_address_of_oldObserverVolumeType_65() { return &___oldObserverVolumeType_65; }
	inline void set_oldObserverVolumeType_65(int32_t value)
	{
		___oldObserverVolumeType_65 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumePerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateObserverPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestMeshPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveMeshObjectPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReclaimMeshObjectPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMeshesPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MeshGenerationActionPerfMarker_67;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___UpdatePerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_49() const { return ___UpdatePerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_49() { return &___UpdatePerfMarker_49; }
	inline void set_UpdatePerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ResumePerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumePerfMarker_55() const { return ___ResumePerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumePerfMarker_55() { return &___ResumePerfMarker_55; }
	inline void set_ResumePerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumePerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_56() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___SuspendPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendPerfMarker_56() const { return ___SuspendPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendPerfMarker_56() { return &___SuspendPerfMarker_56; }
	inline void set_SuspendPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_57() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ClearObservationsPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_57() const { return ___ClearObservationsPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_57() { return &___ClearObservationsPerfMarker_57; }
	inline void set_ClearObservationsPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_58() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___UpdateObserverPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateObserverPerfMarker_58() const { return ___UpdateObserverPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateObserverPerfMarker_58() { return &___UpdateObserverPerfMarker_58; }
	inline void set_UpdateObserverPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateObserverPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_59() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___RequestMeshPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestMeshPerfMarker_59() const { return ___RequestMeshPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestMeshPerfMarker_59() { return &___RequestMeshPerfMarker_59; }
	inline void set_RequestMeshPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestMeshPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_60() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___RemoveMeshObjectPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveMeshObjectPerfMarker_60() const { return ___RemoveMeshObjectPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveMeshObjectPerfMarker_60() { return &___RemoveMeshObjectPerfMarker_60; }
	inline void set_RemoveMeshObjectPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveMeshObjectPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_61() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ReclaimMeshObjectPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReclaimMeshObjectPerfMarker_61() const { return ___ReclaimMeshObjectPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReclaimMeshObjectPerfMarker_61() { return &___ReclaimMeshObjectPerfMarker_61; }
	inline void set_ReclaimMeshObjectPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReclaimMeshObjectPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_62() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___ConfigureObserverVolumePerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_62() const { return ___ConfigureObserverVolumePerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_62() { return &___ConfigureObserverVolumePerfMarker_62; }
	inline void set_ConfigureObserverVolumePerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_66() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___UpdateMeshesPerfMarker_66)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMeshesPerfMarker_66() const { return ___UpdateMeshesPerfMarker_66; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMeshesPerfMarker_66() { return &___UpdateMeshesPerfMarker_66; }
	inline void set_UpdateMeshesPerfMarker_66(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMeshesPerfMarker_66 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_67() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_StaticFields, ___MeshGenerationActionPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MeshGenerationActionPerfMarker_67() const { return ___MeshGenerationActionPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MeshGenerationActionPerfMarker_67() { return &___MeshGenerationActionPerfMarker_67; }
	inline void set_MeshGenerationActionPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MeshGenerationActionPerfMarker_67 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136  : public BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC  : public XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::mixedRealityGazeProviderHeadOverride
	RuntimeObject* ___mixedRealityGazeProviderHeadOverride_29;

public:
	inline static int32_t get_offset_of_mixedRealityGazeProviderHeadOverride_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC, ___mixedRealityGazeProviderHeadOverride_29)); }
	inline RuntimeObject* get_mixedRealityGazeProviderHeadOverride_29() const { return ___mixedRealityGazeProviderHeadOverride_29; }
	inline RuntimeObject** get_address_of_mixedRealityGazeProviderHeadOverride_29() { return &___mixedRealityGazeProviderHeadOverride_29; }
	inline void set_mixedRealityGazeProviderHeadOverride_29(RuntimeObject* value)
	{
		___mixedRealityGazeProviderHeadOverride_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixedRealityGazeProviderHeadOverride_29), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372  : public BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB
{
public:
	// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handDefinition
	ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * ___handDefinition_28;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handMeshProvider
	WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * ___handMeshProvider_29;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::unityJointPoses
	Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * ___unityJointPoses_30;
	// System.Collections.Generic.List`1<UnityEngine.XR.Bone> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::fingerBones
	List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * ___fingerBones_32;

public:
	inline static int32_t get_offset_of_handDefinition_28() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372, ___handDefinition_28)); }
	inline ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * get_handDefinition_28() const { return ___handDefinition_28; }
	inline ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 ** get_address_of_handDefinition_28() { return &___handDefinition_28; }
	inline void set_handDefinition_28(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * value)
	{
		___handDefinition_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handDefinition_28), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshProvider_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372, ___handMeshProvider_29)); }
	inline WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * get_handMeshProvider_29() const { return ___handMeshProvider_29; }
	inline WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 ** get_address_of_handMeshProvider_29() { return &___handMeshProvider_29; }
	inline void set_handMeshProvider_29(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * value)
	{
		___handMeshProvider_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshProvider_29), (void*)value);
	}

	inline static int32_t get_offset_of_unityJointPoses_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372, ___unityJointPoses_30)); }
	inline Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * get_unityJointPoses_30() const { return ___unityJointPoses_30; }
	inline Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB ** get_address_of_unityJointPoses_30() { return &___unityJointPoses_30; }
	inline void set_unityJointPoses_30(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * value)
	{
		___unityJointPoses_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_30), (void*)value);
	}

	inline static int32_t get_offset_of_fingerBones_32() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372, ___fingerBones_32)); }
	inline List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * get_fingerBones_32() const { return ___fingerBones_32; }
	inline List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 ** get_address_of_fingerBones_32() { return &___fingerBones_32; }
	inline void set_fingerBones_32(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * value)
	{
		___fingerBones_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerBones_32), (void*)value);
	}
};

struct WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields
{
public:
	// UnityEngine.XR.HandFinger[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handFingers
	HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* ___handFingers_31;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::rightPalmOffset
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightPalmOffset_33;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::leftPalmOffset
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftPalmOffset_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandDataPerfMarker_36;

public:
	inline static int32_t get_offset_of_handFingers_31() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields, ___handFingers_31)); }
	inline HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* get_handFingers_31() const { return ___handFingers_31; }
	inline HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F** get_address_of_handFingers_31() { return &___handFingers_31; }
	inline void set_handFingers_31(HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* value)
	{
		___handFingers_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handFingers_31), (void*)value);
	}

	inline static int32_t get_offset_of_rightPalmOffset_33() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields, ___rightPalmOffset_33)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rightPalmOffset_33() const { return ___rightPalmOffset_33; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rightPalmOffset_33() { return &___rightPalmOffset_33; }
	inline void set_rightPalmOffset_33(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rightPalmOffset_33 = value;
	}

	inline static int32_t get_offset_of_leftPalmOffset_34() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields, ___leftPalmOffset_34)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_leftPalmOffset_34() const { return ___leftPalmOffset_34; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_leftPalmOffset_34() { return &___leftPalmOffset_34; }
	inline void set_leftPalmOffset_34(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___leftPalmOffset_34 = value;
	}

	inline static int32_t get_offset_of_UpdateControllerPerfMarker_35() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields, ___UpdateControllerPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_35() const { return ___UpdateControllerPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_35() { return &___UpdateControllerPerfMarker_35; }
	inline void set_UpdateControllerPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_UpdateHandDataPerfMarker_36() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields, ___UpdateHandDataPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandDataPerfMarker_36() const { return ___UpdateHandDataPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandDataPerfMarker_36() { return &___UpdateHandDataPerfMarker_36; }
	inline void set_UpdateHandDataPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandDataPerfMarker_36 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_t9D12876746FB188B0A93DA46E92C006BB5FAC38E  : public BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663  : public BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::controllerModelProvider
	WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC * ___controllerModelProvider_30;

public:
	inline static int32_t get_offset_of_controllerModelProvider_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663, ___controllerModelProvider_30)); }
	inline WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC * get_controllerModelProvider_30() const { return ___controllerModelProvider_30; }
	inline WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC ** get_address_of_controllerModelProvider_30() { return &___controllerModelProvider_30; }
	inline void set_controllerModelProvider_30(WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC * value)
	{
		___controllerModelProvider_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerModelProvider_30), (void*)value);
	}
};

struct WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateButtonDataPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateDualAxisDataPerfMarker_29;

public:
	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_28() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_StaticFields, ___UpdateButtonDataPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateButtonDataPerfMarker_28() const { return ___UpdateButtonDataPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateButtonDataPerfMarker_28() { return &___UpdateButtonDataPerfMarker_28; }
	inline void set_UpdateButtonDataPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateButtonDataPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_StaticFields, ___UpdateDualAxisDataPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateDualAxisDataPerfMarker_29() const { return ___UpdateDualAxisDataPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateDualAxisDataPerfMarker_29() { return &___UpdateDualAxisDataPerfMarker_29; }
	inline void set_UpdateDualAxisDataPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateDualAxisDataPerfMarker_29 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController
struct HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40  : public WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663
{
public:

public:
};

struct HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_31;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_31() { return static_cast<int32_t>(offsetof(HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_StaticFields, ___UpdateControllerPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_31() const { return ___UpdateControllerPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_31() { return &___UpdateControllerPerfMarker_31; }
	inline void set_UpdateControllerPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_31 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2  : public GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_69;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_70;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_71;

public:
	inline static int32_t get_offset_of_oldObserverOrigin_69() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2, ___oldObserverOrigin_69)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_69() const { return ___oldObserverOrigin_69; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_69() { return &___oldObserverOrigin_69; }
	inline void set_oldObserverOrigin_69(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_69 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_70() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2, ___oldObservationExtents_70)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_70() const { return ___oldObservationExtents_70; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_70() { return &___oldObservationExtents_70; }
	inline void set_oldObservationExtents_70(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_70 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_71() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2, ___oldObserverVolumeType_71)); }
	inline int32_t get_oldObserverVolumeType_71() const { return ___oldObserverVolumeType_71; }
	inline int32_t* get_address_of_oldObserverVolumeType_71() { return &___oldObserverVolumeType_71; }
	inline void set_oldObserverVolumeType_71(int32_t value)
	{
		___oldObserverVolumeType_71 = value;
	}
};

struct WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_68;

public:
	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_68() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_StaticFields, ___ConfigureObserverVolumePerfMarker_68)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_68() const { return ___ConfigureObserverVolumePerfMarker_68; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_68() { return &___ConfigureObserverVolumePerfMarker_68; }
	inline void set_ConfigureObserverVolumePerfMarker_68(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * m_Items[1];

public:
	inline MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  m_Items[1];

public:
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_gshared (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mC4CA4D47DA78C7E379A3D56A17DC89D6F631D1AA_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D * ___stateMachine0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m61EA3064D24BCDDB8607EFCD031DEBE993666B70_gshared_inline (BaseDataProvider_1_t38199E18DA7F6B6B5830AFCCFC0AB07436023F63 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m9AAFAC3D3761E474D8C3633A969D8F100D4BE556_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mADE36D682DE1771E1E8151490E75BAA5571FFC0E_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4208DB069C1004491F916E23C04A2F703A9A46D7_gshared (Dictionary_2_tD64A140F9C7944189EB92B8FC875A340496404BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_gshared (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC9BA3DB2E164ED1519E964BA1D209A48BB415601_gshared (Dictionary_2_tD64A140F9C7944189EB92B8FC875A340496404BA * __this, int32_t ___key0, MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * ___value1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m03493D4F6AA64F7FC0B11B1A00F1289DC32AA5E7_gshared (Dictionary_2_tD64A140F9C7944189EB92B8FC875A340496404BA * __this, int32_t ___key0, MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m607AD6B15DB3E1CE7C9CAE0508E3CEAAF2530B59_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mD1C76C7CC6875D2B30A0E322055856852FC89674_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m569B5320DF296EBF05D56897444518D24300B272_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_m4B3149252CAF82438B32389422D1254A25ACC29A_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 * ___stateMachine1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m93CD10570C2965D671E70A39C02F1D08142B900A_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  MixedRealityPose_get_ZeroIdentity_mEC8CE533E546C711A4729A5A71265814946BA46F_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_mC3A05EEF2395F1FC30E46840F6CE206634682B8B (GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mDB7992EE3CB8C27BBC949D254F3BC96147532532_inline (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___usage0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformPoint_mCC072AE0B50094CE0E7A972B14556AA0EEE36448 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_mBD8251C8D2B006BDB8E503DB6BCB14E97A6AE30B_inline (MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___usage0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value1, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPlayspace_get_Rotation_mECA6DB764B6DDCB25C42BC3CAD578F74629D2BD8 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_mDCABF6481B0F04AB8B2F7A6DA77CDCFC96A83DEE_inline (MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_m532B2410B843F985CAB005CA9B9241FC362F6D0E (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_mF6337FD8FF7B4B6CADDB107954FB85734BB5D3C2 (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_mCAAA6BFCBFFDA002DE606EADA9A5EC686B851973_inline (BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m13C255EAC571CE06437AB8ACC18737314BC60B92_inline (BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  MixedRealityInteractionMapping_get_MixedRealityInputAction_m355C2AA09654458DEF3B6317C0DDF1415474F97C_inline (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  MixedRealityInteractionMapping_get_PoseData_mEF373BAE5C8B71DED13443C4D08A608042BCBAAF_inline (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdatePoseData_mF42729A05305B3830AF04D816FDA106B3295F0B3 (GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368 * __this, MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionControllerDefinition__ctor_mA0F5E4C53D83536A23F905F17865F769CCF4C986 (HPMotionControllerDefinition_tFF38ED122E42AFFD10D5901A5834395074B5F34B * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_mC75AA923B7E989CD9DFD74799B598D77A89026D8 (WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___definition2, RuntimeObject* ___inputSource3, MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* ___interactions4, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m8159FC72C7936F9453C8D8150E4EAE42120CD3AB_inline (BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_m3A82CE6D6CBEEB727963154FD89445F07A26B740 (GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__ctor_m82D9AFBC877DD938D060894BA4EF3DC83D961CE1 (BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8 * ___profile3, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
inline void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, bool, const RuntimeMethod*))Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared)(__this, ___value0, method);
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityCameraSettings_get_IsActiveLoader_m186427DE4AECFA7E683230FA9153CB473D1B7494 (WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, const RuntimeMethod*))Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings_EnableIfLoaderBecomesActive_mAA676CC839915D735CB8A78D4770608F187FDF73 (WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378 (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, const RuntimeMethod*))Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_Enable_m700A36C6E901A195580A83148FA1D6B16C7F7D61 (BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mC4CA4D47DA78C7E379A3D56A17DC89D6F631D1AA (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mC4CA4D47DA78C7E379A3D56A17DC89D6F631D1AA_gshared)(__this, ___stateMachine0, method);
}
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * XRSubsystemHelpers_get_DisplaySubsystem_m6D4DE34A9756E7FAA68C879FDA7EF32F5305C2B2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_mDF69BEEA2858572D6B8DDEE359313BE66A6088CE (XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___profile3, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityDeviceManager_get_IsActiveLoader_m8F8128124D0DFFE69ADCA884E3BCA8EF0A9F0186 (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_EnableIfLoaderBecomesActive_m177E8B9299BBC7E2148BB52286EFC6F9DBB71F88 (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mBFBDED5615A7E4344889332838B7CD84980E908D_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_mDD827FD31B9DE9424917999A63BEC9768837C256 (XRSDKWindowsMixedRealityUtilitiesProvider_t5BE2CDEA90C55FF33249F5B95D1A1B8788EC8ED9 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::set_UtilitiesProvider(Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_mAF3CE4E9D0A830EAA0D2C52EE9B7B89122813D6D_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_m65E251DB9023D2A92E30E1CD2F5407E2114F75C1_inline (BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_tEC3109DD7330EBFBD10659E4D839217213171929 *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m61EA3064D24BCDDB8607EFCD031DEBE993666B70_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m8519B781AC05519D6A0F3C6E160254302FC73EDF (BaseService_t970AB4B49A871288A7CF21E96152159D1ED662F8 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m9AAFAC3D3761E474D8C3633A969D8F100D4BE556 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m9AAFAC3D3761E474D8C3633A969D8F100D4BE556_gshared)(__this, ___stateMachine0, method);
}
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_mCA3CA2333717B0394512EF126983FE98289A8C85 (const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_get_Now_m61B7689A79EE921AFDBCE65FA65A942A3DA0DC6E (const RuntimeMethod* method);
// Windows.Perception.PerceptionTimestamp Windows.Perception.PerceptionTimestampHelper::FromHistoricalTargetTime(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * PerceptionTimestampHelper_FromHistoricalTargetTime_mD05C516F9E736D0DB9A5F7AEAE0E9CC446CA84F3 (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___targetTime0, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialPointerPose Windows.UI.Input.Spatial.SpatialPointerPose::TryGetAtTimestamp(Windows.Perception.Spatial.SpatialCoordinateSystem,Windows.Perception.PerceptionTimestamp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * SpatialPointerPose_TryGetAtTimestamp_m0038031AA8B49B7F5B7716B9D771E71137C8812B (SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___coordinateSystem0, PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * ___timestamp1, const RuntimeMethod* method);
// Windows.Perception.People.HeadPose Windows.UI.Input.Spatial.SpatialPointerPose::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * SpatialPointerPose_get_Head_mC788CD23770CD682FC645D987F6C91B9768AC60A (SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * __this, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  HeadPose_get_Position_m06A502BCF1C798A30D4AE9AF5CC1F173E166117E (HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SystemNumericsExtensions_ToUnityVector3_m685F96518FA54507B88CABB191C09D552C818CA6 (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___vector0, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_ForwardDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  HeadPose_get_ForwardDirection_mA44E69DA5FB2AD26B29A168CF8715CC70B798A0E (HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Update_m3DC6FA89E0D6BC505597B22132789A6C27D407B3 (XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Utilities.WindowsApiChecker::IsMethodAvailable(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsApiChecker_IsMethodAvailable_m39719F55E46F67B444967884F23FADA423DA3790 (String_t* ___namespaceName0, String_t* ___className1, String_t* ___methodName2, const RuntimeMethod* method);
// System.Boolean Windows.UI.Input.Spatial.SpatialInteractionManager::IsSourceKindSupported(Windows.UI.Input.Spatial.SpatialInteractionSourceKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialInteractionManager_IsSourceKindSupported_m5ADA1FAB14D51E057C9097C2B24D01C0E3A88EB8 (int32_t ___kind0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRSDKDeviceManager_GetControllerType_mE4CE42638DD48A70A071A0F188136DABF5DBDDFC (XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_mBFDA5C0E5FC6E0DF2B37BBE73C47335EC77BC8A2 (XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.FlagsExtensions::IsMaskSet(UnityEngine.XR.InputDeviceCharacteristics,UnityEngine.XR.InputDeviceCharacteristics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlagsExtensions_IsMaskSet_m7218A6B97EF05754F7238CF9EC14B0534F7C35DD (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___usage0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___value1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_m0FE01278EFFD738EB6CDBDAD16D87316BB0E6763 (XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_mCAB2D6392AFE78CCD5A6762107127D3E7FBA617A (BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother__ctor_m9196C82836611BDEC0EE83DC9194F9FA6B220782 (EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccade_m5F0EACB16F2A0DDB1F70B21FE2163254B3CFE5A8 (EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccadeX_m41F4CE09F8FF51924F4D4FFDA4E534712171BBCA (EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccadeY_m920643E4F70A17B3B416963F42830F9924041FDC (EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_mCF2536A743E693FD564449BB9FF96415EA591EC6 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_EnableIfLoaderBecomesActive_m046AECC93A5C6847D1D759E94C2A173121CAA4CA (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mADE36D682DE1771E1E8151490E75BAA5571FFC0E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mADE36D682DE1771E1E8151490E75BAA5571FFC0E_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_mF27CCCD571A53AEA4408A2C9A1147BA3C620F966 (GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * XRSubsystemHelpers_get_MeshSubsystem_m34150FDAFDDE6CA5A79EDB4D7722579D3260C5AE (const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObserverOrigin_mF544B86AC31DFFF8B2DFFD3FCCF533204D1297C9_inline (BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObservationExtents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObservationExtents_m5906CB7BFBED0988FB69067AD7FD4C6535616E65_inline (BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverVolumeType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mEB74CF6C01E0DA4900AA5B1BF3AC02792C27A337_inline (BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_SetBoundingVolume_mEEEFB719CE72346BF549DC5245C218F7A5699D92 (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___extents1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_m9B3B3926CD414C582F28FCA4006CA4C5601C745B (Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB *, const RuntimeMethod*))Dictionary_2__ctor_m4208DB069C1004491F916E23C04A2F703A9A46D7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
inline void List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, const RuntimeMethod*))List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition__ctor_mE1491C0394F58905E585CCA04F50E9320BA031CE (ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_m85E02A2A9C43CEDEA8FE583034DCC54871257FF3 (BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::get_Right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * WindowsMixedRealityHandMeshProvider_get_Right_m03C060CCD045A69CE29B08BBA1500C3E9F544DA5_inline (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::get_Left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * WindowsMixedRealityHandMeshProvider_get_Left_mE0F7711A4802A2E97A2CA4887349602331751027_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::SetInputSource(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider_SetInputSource_mCBCA6858E0FE03566CF9E6244FAEE8BADC27B803 (WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * __this, RuntimeObject* ___inputSource0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m38CF0FA4A12079B3A8BAB98E6441E131F65D018C (Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * __this, int32_t ___key0, MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB *, int32_t, MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF *, const RuntimeMethod*))Dictionary_2_TryGetValue_mC9BA3DB2E164ED1519E964BA1D209A48BB415601_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArticulatedHandDefinition_get_IsInPointingPose_m9EDE61CC19642CF9BA4370937CF6702200675E78 (ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m03D346F3AD7EABE8AF6D6035965A4C3B4E21A7F8 (WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* BaseController_get_Interactions_m819184740A11C309DF8EA306840AB567063B5F4C_inline (BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentIndexPose_m316F8E69BE852E02D62A73B4235961521DBA96A4 (ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * __this, MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * ___interactionMapping0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentTeleportPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentTeleportPose_mAA9A173ED8FCA8809B9B3764C8F7BA5DD1C69454 (ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * __this, MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * ___interactionMapping0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>,UnityEngine.XR.Hand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mC71ECD9D8F61BB5D594DD9DFB33D1ED86698EC0D (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___usage0, Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Hand::TryGetFingerBones(UnityEngine.XR.HandFinger,System.Collections.Generic.List`1<UnityEngine.XR.Bone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_TryGetFingerBones_mFA237811578942428A5EEA801791B1A3CE8C651A (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, int32_t ___finger0, List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * ___bonesOut1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, int32_t, const RuntimeMethod*))List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.Bone::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetPosition_m261057D3419C036E0CEE6F42398398601977DD0A (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Bone::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetRotation_mEB7B9EED27F1BD731F9ECB467CFC3B3A475CBF69 (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_mFE93132F85D27F44C1B72FE0CECE5AF240652830 (WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372 * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_m69B106C5AB1ED82F8747B822124435755D7A658B (MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mBA3B430C35CBE8EF82E74479E4F2A57CDA7F1ED6 (Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * __this, int32_t ___key0, MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB *, int32_t, MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF , const RuntimeMethod*))Dictionary_2_set_Item_m03493D4F6AA64F7FC0B11B1A00F1289DC32AA5E7_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
inline int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, const RuntimeMethod*))List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline)(__this, method);
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_m014F47B942F67521C9CBE13E2CEEF802F2326341_inline (MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateHandJoints_m3DBAFF7AB8ADF2A54509A063F2FE72C3FCACF88E (ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * __this, Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * ___jointPoses0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleHandDefinition__ctor_m893D921F9F037BBFB4F7D14085F0B1A680A05AF6 (SimpleHandDefinition_t5E7B267DBE9DFD8C7A4217B7E547A856D6B6DBEB * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityControllerDefinition__ctor_m1E167C9D9C1ADCD8A9C7C45969B2848A739BD1C1 (WindowsMixedRealityControllerDefinition_t77BE5C8C1EF9B94AAAD851F357D013BABF6B0DFE * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_m5C82808D22403A493485BBF1E8BCE31DCADC8F43 (GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368 * __this, MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_m888527DC925FE0F4AC7FC9F2B531AC4A9BA4990E (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m52553A0960C9C5D603C3CEA58E5A14FA07407484_inline (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateDualAxisData_mB046F42D39404F89E9D36DF3259DC49AF41E71FE (GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368 * __this, MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_Vector2Data(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_Vector2Data_mEF520A47CC75E3B2FD2B6D1B3586788F235D414A (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_m06169FB8F22B70262A98E9D357FF2D0F2CAF6357_inline (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.BaseController::GetControllerVisualizationProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111 * BaseController_GetControllerVisualizationProfile_m71D75B9D8DF7CA8598546ED2A54C132099C18BC1 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::GetUsePlatformModelsOverride(System.Type,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityControllerVisualizationProfile_GetUsePlatformModelsOverride_m265C7210C478B47EBACB9D7F14D36DA6A4B529C6 (MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111 * __this, Type_t * ___controllerType0, uint8_t ___hand1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::TryRenderControllerModel(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseController_TryRenderControllerModel_m96E65D45098E5C450B594C7559058B6D19CF9646 (BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::TryRenderControllerModelWithModelProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_TryRenderControllerModelWithModelProvider_m82D591993259BA61D788D5A6D33FC380BBBC57CC (WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m607AD6B15DB3E1CE7C9CAE0508E3CEAAF2530B59 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m607AD6B15DB3E1CE7C9CAE0508E3CEAAF2530B59_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * AwaiterExtensions_GetAwaiter_mA3AFD1DB345C130BF701BE302DAF7654FA3EEED0 (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mFFFDFC33C8B0031C7531E7CCA4BE13ECAB038EB8_inline (SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mB5FECED3CFA225DAE3F1612B6BF81C12F50EAD3A (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 **, U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mD1C76C7CC6875D2B30A0E322055856852FC89674_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_mF074C7B50AF35EA1BE937F5E5D6E81E125049FD5 (SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_mC23F3C80CFE90F865D70AC55549C8EB9C80996C0 (U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m8CD8448CA03BBA41B633F1C5291FCC5727CBFFE8 (U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m89EAB79F38E5631C2A15525894251C3358EB7334 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 **, U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m569B5320DF296EBF05D56897444518D24300B272_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m0ACEF603806CE2E4421806810038A4725B1C5C12 (U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_mCD977E1EBE0B82A625413ECD750C49517A637B1E (U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mF7E834C898FEF1C1AB730C957D6686BCDB315AA0 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 **, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_m4B3149252CAF82438B32389422D1254A25ACC29A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__23_MoveNext_mAFF88E1C32EC0013826743DA0A66F8BB939A047F (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__23_SetStateMachine_m27AAB691562F9B8643C1F21FB39DDECC44C52802 (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityControllerModelProvider__ctor_m320B32E4CFCB8471B6738CBF45C950BDAF8C0836 (WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::TryGenerateControllerModelFromPlatformSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * WindowsMixedRealityControllerModelProvider_TryGenerateControllerModelFromPlatformSDK_mF206B85AA98F7F7BB07E87FFEA31FC4BA1154907 (WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<UnityEngine.GameObject>::GetAwaiter()
inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631 (Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  (*) (Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m4FB891DFBA726FF679D13E30C52E8EFAF4FF1D52 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * ___awaiter0, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m93CD10570C2965D671E70A39C02F1D08142B900A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>::GetResult()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2 (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerModelHelpers::TryAddVisualizationScript(UnityEngine.GameObject,System.Type,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityControllerModelHelpers_TryAddVisualizationScript_mDA0C3444D21EC9BB34708A9DDF0208C85C5C15E1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___controllerModel0, Type_t * ___controllerType1, uint8_t ___handedness2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::TryAddControllerModelToSceneHierarchy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseController_TryAddControllerModelToSceneHierarchy_mB2F1BDD2A5773120E89BDE5DF2AE2037BC5D02D9 (BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___controllerObject0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::<>n__0(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKMotionController_U3CU3En__0_m2AA1B00FB9B00DBFD7AEC72B105A75B28BC9A327 (WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_m5FC17C76C7E420CB86F1FAF9DC53D5E5B74DD3D6 (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_m1AB3AE4AF5FEED6289FCF7FCEA6FB6AA0F7164EE (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_m85E02A2A9C43CEDEA8FE583034DCC54871257FF3 (BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_24(L_0);
		// private Quaternion currentPointerRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_25(L_1);
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_il2cpp_TypeInfo_var);
		MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  L_2;
		L_2 = MixedRealityPose_get_ZeroIdentity_mEC8CE533E546C711A4729A5A71265814946BA46F_inline(/*hidden argument*/NULL);
		__this->set_currentPointerPose_26(L_2);
		// : base(trackingState, sourceHandedness, inputSource, interactions, definition)
		int32_t L_3 = ___trackingState0;
		uint8_t L_4 = ___sourceHandedness1;
		RuntimeObject* L_5 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_6 = ___interactions3;
		RuntimeObject* L_7 = ___definition4;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_mC3A05EEF2395F1FC30E46840F6CE206634682B8B(__this, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource_UpdatePoseData_mAD153EB4B7D4219CAF54E2D728FE167C9330A614 (BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB * __this, MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var))->get_UpdatePoseDataPerfMarker_27();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mDB7992EE3CB8C27BBC949D254F3BC96147532532_inline(L_2, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)3))))
			{
				goto IL_00b1;
			}
		}

IL_001a:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerPosition, out currentPointerPosition))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_4 = ((CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23_il2cpp_TypeInfo_var))->get_PointerPosition_0();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_currentPointerPosition_24();
			bool L_6;
			L_6 = InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0044;
			}
		}

IL_002e:
		{
			// currentPointerPose.Position = MixedRealityPlayspace.TransformPoint(currentPointerPosition);
			MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * L_7 = __this->get_address_of_currentPointerPose_26();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_currentPointerPosition_24();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = MixedRealityPlayspace_TransformPoint_mCC072AE0B50094CE0E7A972B14556AA0EEE36448(L_8, /*hidden argument*/NULL);
			MixedRealityPose_set_Position_mBD8251C8D2B006BDB8E503DB6BCB14E97A6AE30B_inline((MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF *)L_7, L_9, /*hidden argument*/NULL);
		}

IL_0044:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerRotation, out currentPointerRotation))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_10 = ((CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tA4E1EF349281EFB6815B9A842D7203F5C610FC23_il2cpp_TypeInfo_var))->get_PointerRotation_1();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_11 = __this->get_address_of_currentPointerRotation_25();
			bool L_12;
			L_12 = InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_10, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0073;
			}
		}

IL_0058:
		{
			// currentPointerPose.Rotation = MixedRealityPlayspace.Rotation * currentPointerRotation;
			MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * L_13 = __this->get_address_of_currentPointerPose_26();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
			L_14 = MixedRealityPlayspace_get_Rotation_mECA6DB764B6DDCB25C42BC3CAD578F74629D2BD8(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = __this->get_currentPointerRotation_25();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
			L_16 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_14, L_15, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_mDCABF6481B0F04AB8B2F7A6DA77CDCFC96A83DEE_inline((MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF *)L_13, L_16, /*hidden argument*/NULL);
		}

IL_0073:
		{
			// interactionMapping.PoseData = currentPointerPose;
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_17 = ___interactionMapping0;
			MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  L_18 = __this->get_currentPointerPose_26();
			NullCheck(L_17);
			MixedRealityInteractionMapping_set_PoseData_m532B2410B843F985CAB005CA9B9241FC362F6D0E(L_17, L_18, /*hidden argument*/NULL);
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_19 = ___interactionMapping0;
			NullCheck(L_19);
			bool L_20;
			L_20 = MixedRealityInteractionMapping_get_Changed_mF6337FD8FF7B4B6CADDB107954FB85734BB5D3C2(L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00b9;
			}
		}

IL_0087:
		{
			// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
			RuntimeObject* L_21;
			L_21 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
			RuntimeObject* L_22 = L_21;
			G_B8_0 = L_22;
			if (L_22)
			{
				G_B9_0 = L_22;
				goto IL_0092;
			}
		}

IL_008f:
		{
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}

IL_0092:
		{
			RuntimeObject* L_23;
			L_23 = BaseController_get_InputSource_mCAAA6BFCBFFDA002DE606EADA9A5EC686B851973_inline(__this, /*hidden argument*/NULL);
			uint8_t L_24;
			L_24 = BaseController_get_ControllerHandedness_m13C255EAC571CE06437AB8ACC18737314BC60B92_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_25 = ___interactionMapping0;
			NullCheck(L_25);
			MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_26;
			L_26 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m355C2AA09654458DEF3B6317C0DDF1415474F97C_inline(L_25, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_27 = ___interactionMapping0;
			NullCheck(L_27);
			MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  L_28;
			L_28 = MixedRealityInteractionMapping_get_PoseData_mEF373BAE5C8B71DED13443C4D08A608042BCBAAF_inline(L_27, /*hidden argument*/NULL);
			NullCheck(G_B9_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A , MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var, G_B9_0, L_23, L_24, L_26, L_28);
			// break;
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}

IL_00b1:
		{
			// base.UpdatePoseData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_29 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_30 = ___inputDevice1;
			GenericXRSDKController_UpdatePoseData_mF42729A05305B3830AF04D816FDA106B3295F0B3(__this, L_29, L_30, /*hidden argument*/NULL);
		}

IL_00b9:
		{
			// }
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(187)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC9, IL_00c9)
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__cctor_mCF29F970FCA1E3598D690978170905CCB8D30C52 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] BaseWindowsMixedRealityXRSDKSource.UpdatePoseData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478, /*hidden argument*/NULL);
		((BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var))->set_UpdatePoseDataPerfMarker_27(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController__ctor_m8CB4D50E80C1AF6ADC85CAE40907B6617D2E2857 (HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionControllerDefinition_tFF38ED122E42AFFD10D5901A5834395074B5F34B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, new HPMotionControllerDefinition(controllerHandedness), inputSource, interactions)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		uint8_t L_2 = ___controllerHandedness1;
		HPMotionControllerDefinition_tFF38ED122E42AFFD10D5901A5834395074B5F34B * L_3 = (HPMotionControllerDefinition_tFF38ED122E42AFFD10D5901A5834395074B5F34B *)il2cpp_codegen_object_new(HPMotionControllerDefinition_tFF38ED122E42AFFD10D5901A5834395074B5F34B_il2cpp_TypeInfo_var);
		HPMotionControllerDefinition__ctor_mA0F5E4C53D83536A23F905F17865F769CCF4C986(L_3, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_5 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var);
		WindowsMixedRealityXRSDKMotionController__ctor_mC75AA923B7E989CD9DFD74799B598D77A89026D8(__this, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController_UpdateController_m0731D5CC7B48D6FD190017657A6643232D9AA6E3 (HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_StaticFields*)il2cpp_codegen_static_fields_for(HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_31();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!Enabled) { return; }
			bool L_2;
			L_2 = BaseController_get_Enabled_m8159FC72C7936F9453C8D8150E4EAE42120CD3AB_inline(__this, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0018;
			}
		}

IL_0016:
		{
			// if (!Enabled) { return; }
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		}

IL_0018:
		{
			// base.UpdateController(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_3 = ___inputDevice0;
			GenericXRSDKController_UpdateController_m3A82CE6D6CBEEB727963154FD89445F07A26B740(__this, L_3, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController__cctor_mD61B416A657C742E7FF9ABEB7C5EE9BD90C1E7D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D17FEBF4804F05DE32748DA39E72ABF808EAB75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] HPController.UpdateController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral2D17FEBF4804F05DE32748DA39E72ABF808EAB75, /*hidden argument*/NULL);
		((HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_StaticFields*)il2cpp_codegen_static_fields_for(HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_31(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings__ctor_mBEC1ADD615B45B66E52C0993BC9CF793502744E4 (WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_tAFBB12867D1B05C187631306E8FFADF52B2E72E8 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityCameraSettings_tF049E9AFD9544F4C5FAA918FAAAA5936AFA10D98_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityCameraSettings__ctor_m82D9AFBC877DD938D060894BA4EF3DC83D961CE1(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityCameraSettings_get_IsActiveLoader_m186427DE4AECFA7E683230FA9153CB473D1B7494 (WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// false;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_0), (bool)0, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings_Enable_mFBF4CAD6D2B382108A8DF85C84D4CEE4ED1B35C7 (WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!IsActiveLoader.HasValue)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityCameraSettings_get_IsActiveLoader_m186427DE4AECFA7E683230FA9153CB473D1B7494(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// EnableIfLoaderBecomesActive();
		WindowsMixedRealityCameraSettings_EnableIfLoaderBecomesActive_mAA676CC839915D735CB8A78D4770608F187FDF73(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// else if (!IsActiveLoader.Value)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_2;
		L_2 = WindowsMixedRealityCameraSettings_get_IsActiveLoader_m186427DE4AECFA7E683230FA9153CB473D1B7494(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0036:
	{
		// base.Enable();
		BaseWindowsMixedRealityCameraSettings_Enable_m700A36C6E901A195580A83148FA1D6B16C7F7D61(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings_EnableIfLoaderBecomesActive_mAA676CC839915D735CB8A78D4770608F187FDF73 (WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mC4CA4D47DA78C7E379A3D56A17DC89D6F631D1AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mC4CA4D47DA78C7E379A3D56A17DC89D6F631D1AA((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mC4CA4D47DA78C7E379A3D56A17DC89D6F631D1AA_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettings_get_IsOpaque_mECE735EAD11FE1DA9A1994775624747C9AFB3468 (WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t13CC57A50DBF99585F8D926D084FC1AF1D6971B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * G_B2_0 = NULL;
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * G_B1_0 = NULL;
	{
		// public override bool IsOpaque => XRSubsystemHelpers.DisplaySubsystem?.displayOpaque ?? true;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t13CC57A50DBF99585F8D926D084FC1AF1D6971B3_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0;
		L_0 = XRSubsystemHelpers_get_DisplaySubsystem_m6D4DE34A9756E7FAA68C879FDA7EF32F5305C2B2(/*hidden argument*/NULL);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F(G_B2_0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::<EnableIfLoaderBecomesActive>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_m6C822F6C75A4B3E5218E58A23FC08610510FD3A6 (WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// await new WaitUntil(() => IsActiveLoader.HasValue);
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityCameraSettings_get_IsActiveLoader_m186427DE4AECFA7E683230FA9153CB473D1B7494(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager__ctor_m50AD46F970A1766DD69B69DC0860A67409D7FAF4 (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t776A8F366E07807D56FDDDCE81F3BA02BA178FFD_il2cpp_TypeInfo_var);
		XRSDKDeviceManager__ctor_mDF69BEEA2858572D6B8DDEE359313BE66A6088CE(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityDeviceManager_get_IsActiveLoader_m8F8128124D0DFFE69ADCA884E3BCA8EF0A9F0186 (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// false;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_0), (bool)0, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Enable_mA71D26082C7D45265A09054C5CD9C448BAC2C85D (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m65E251DB9023D2A92E30E1CD2F5407E2114F75C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProviderHeadOverride_t639443EF48CEE257BA4C6391C7112B7390F665FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKWindowsMixedRealityUtilitiesProvider_t5BE2CDEA90C55FF33249F5B95D1A1B8788EC8ED9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* G_B8_0 = NULL;
	WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * G_B8_1 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * G_B7_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * G_B9_1 = NULL;
	{
		// if (!IsActiveLoader.HasValue)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityDeviceManager_get_IsActiveLoader_m8F8128124D0DFFE69ADCA884E3BCA8EF0A9F0186(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// EnableIfLoaderBecomesActive();
		WindowsMixedRealityDeviceManager_EnableIfLoaderBecomesActive_m177E8B9299BBC7E2148BB52286EFC6F9DBB71F88(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// else if (!IsActiveLoader.Value)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_2;
		L_2 = WindowsMixedRealityDeviceManager_get_IsActiveLoader_m8F8128124D0DFFE69ADCA884E3BCA8EF0A9F0186(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0036:
	{
		// if (WindowsMixedRealityUtilities.UtilitiesProvider == null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mBFBDED5615A7E4344889332838B7CD84980E908D_inline(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		// WindowsMixedRealityUtilities.UtilitiesProvider = new XRSDKWindowsMixedRealityUtilitiesProvider();
		XRSDKWindowsMixedRealityUtilitiesProvider_t5BE2CDEA90C55FF33249F5B95D1A1B8788EC8ED9 * L_5 = (XRSDKWindowsMixedRealityUtilitiesProvider_t5BE2CDEA90C55FF33249F5B95D1A1B8788EC8ED9 *)il2cpp_codegen_object_new(XRSDKWindowsMixedRealityUtilitiesProvider_t5BE2CDEA90C55FF33249F5B95D1A1B8788EC8ED9_il2cpp_TypeInfo_var);
		XRSDKWindowsMixedRealityUtilitiesProvider__ctor_mDD827FD31B9DE9424917999A63BEC9768837C256(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var);
		WindowsMixedRealityUtilities_set_UtilitiesProvider_mAF3CE4E9D0A830EAA0D2C52EE9B7B89122813D6D_inline(L_5, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// mixedRealityGazeProviderHeadOverride = Service?.GazeProvider as IMixedRealityGazeProviderHeadOverride;
		RuntimeObject* L_6;
		L_6 = BaseDataProvider_1_get_Service_m65E251DB9023D2A92E30E1CD2F5407E2114F75C1_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m65E251DB9023D2A92E30E1CD2F5407E2114F75C1_RuntimeMethod_var);
		RuntimeObject* L_7 = L_6;
		G_B7_0 = L_7;
		G_B7_1 = __this;
		if (L_7)
		{
			G_B8_0 = L_7;
			G_B8_1 = __this;
			goto IL_0055;
		}
	}
	{
		G_B9_0 = ((RuntimeObject*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_005a;
	}

IL_0055:
	{
		NullCheck(G_B8_0);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var, G_B8_0);
		G_B9_0 = L_8;
		G_B9_1 = G_B8_1;
	}

IL_005a:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_mixedRealityGazeProviderHeadOverride_29(((RuntimeObject*)IsInst((RuntimeObject*)G_B9_0, IMixedRealityGazeProviderHeadOverride_t639443EF48CEE257BA4C6391C7112B7390F665FC_il2cpp_TypeInfo_var)));
		// base.Enable();
		BaseService_Enable_m8519B781AC05519D6A0F3C6E160254302FC73EDF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_EnableIfLoaderBecomesActive_m177E8B9299BBC7E2148BB52286EFC6F9DBB71F88 (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m9AAFAC3D3761E474D8C3633A969D8F100D4BE556_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m9AAFAC3D3761E474D8C3633A969D8F100D4BE556((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m9AAFAC3D3761E474D8C3633A969D8F100D4BE556_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Update_m6D38A1329A84CB74B6B6DFEE309FF4D5A86F235A (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProviderHeadOverride_t639443EF48CEE257BA4C6391C7112B7390F665FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * V_0 = NULL;
	HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * V_1 = NULL;
	{
		// if (!IsEnabled)
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (mixedRealityGazeProviderHeadOverride != null && mixedRealityGazeProviderHeadOverride.UseHeadGazeOverride && WindowsMixedRealityUtilities.SpatialCoordinateSystem != null)
		RuntimeObject* L_1 = __this->get_mixedRealityGazeProviderHeadOverride_29();
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_mixedRealityGazeProviderHeadOverride_29();
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::get_UseHeadGazeOverride() */, IMixedRealityGazeProviderHeadOverride_t639443EF48CEE257BA4C6391C7112B7390F665FC_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_4;
		L_4 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_mCA3CA2333717B0394512EF126983FE98289A8C85(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0068;
		}
	}
	{
		// SpatialPointerPose pointerPose = SpatialPointerPose.TryGetAtTimestamp(WindowsMixedRealityUtilities.SpatialCoordinateSystem, PerceptionTimestampHelper.FromHistoricalTargetTime(DateTimeOffset.Now));
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_5;
		L_5 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_mCA3CA2333717B0394512EF126983FE98289A8C85(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_6;
		L_6 = DateTimeOffset_get_Now_m61B7689A79EE921AFDBCE65FA65A942A3DA0DC6E(/*hidden argument*/NULL);
		PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * L_7;
		L_7 = PerceptionTimestampHelper_FromHistoricalTargetTime_mD05C516F9E736D0DB9A5F7AEAE0E9CC446CA84F3(L_6, /*hidden argument*/NULL);
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_8;
		L_8 = SpatialPointerPose_TryGetAtTimestamp_m0038031AA8B49B7F5B7716B9D771E71137C8812B(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// if (pointerPose != null)
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		// HeadPose head = pointerPose.Head;
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_10 = V_0;
		NullCheck(L_10);
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_11;
		L_11 = SpatialPointerPose_get_Head_mC788CD23770CD682FC645D987F6C91B9768AC60A(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// if (head != null)
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_12 = V_1;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		// mixedRealityGazeProviderHeadOverride.OverrideHeadGaze(head.Position.ToUnityVector3(), head.ForwardDirection.ToUnityVector3());
		RuntimeObject* L_13 = __this->get_mixedRealityGazeProviderHeadOverride_29();
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_14 = V_1;
		NullCheck(L_14);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_15;
		L_15 = HeadPose_get_Position_m06A502BCF1C798A30D4AE9AF5CC1F173E166117E(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = SystemNumericsExtensions_ToUnityVector3_m685F96518FA54507B88CABB191C09D552C818CA6(L_15, /*hidden argument*/NULL);
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_17 = V_1;
		NullCheck(L_17);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_18;
		L_18 = HeadPose_get_ForwardDirection_mA44E69DA5FB2AD26B29A168CF8715CC70B798A0E(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = SystemNumericsExtensions_ToUnityVector3_m685F96518FA54507B88CABB191C09D552C818CA6(L_18, /*hidden argument*/NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::OverrideHeadGaze(UnityEngine.Vector3,UnityEngine.Vector3) */, IMixedRealityGazeProviderHeadOverride_t639443EF48CEE257BA4C6391C7112B7390F665FC_il2cpp_TypeInfo_var, L_13, L_16, L_19);
	}

IL_0068:
	{
		// base.Update();
		XRSDKDeviceManager_Update_m3DC6FA89E0D6BC505597B22132789A6C27D407B3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_CheckCapability_m838ADAF9409BE3746BD6102FF0072B286D034FBD (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t13CC57A50DBF99585F8D926D084FC1AF1D6971B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WindowsApiChecker.IsMethodAvailable(
		//     "Windows.UI.Input.Spatial",
		//     "SpatialInteractionManager",
		//     "IsSourceKindSupported"))
		bool L_0;
		L_0 = WindowsApiChecker_IsMethodAvailable_m39719F55E46F67B444967884F23FADA423DA3790(_stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE, _stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E, _stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_1 = ___capability0;
		if ((!(((uint32_t)L_1) > ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___capability0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_004b;
	}

IL_0020:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Hand);
		bool L_3;
		L_3 = SpatialInteractionManager_IsSourceKindSupported_m5ADA1FAB14D51E057C9097C2B24D01C0E3A88EB8(1, /*hidden argument*/NULL);
		return L_3;
	}

IL_0027:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Controller);
		bool L_4;
		L_4 = SpatialInteractionManager_IsSourceKindSupported_m5ADA1FAB14D51E057C9097C2B24D01C0E3A88EB8(3, /*hidden argument*/NULL);
		return L_4;
	}

IL_002e:
	{
		// if (XRSubsystemHelpers.DisplaySubsystem != null && !XRSubsystemHelpers.DisplaySubsystem.displayOpaque)
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t13CC57A50DBF99585F8D926D084FC1AF1D6971B3_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_5;
		L_5 = XRSubsystemHelpers_get_DisplaySubsystem_m6D4DE34A9756E7FAA68C879FDA7EF32F5305C2B2(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t13CC57A50DBF99585F8D926D084FC1AF1D6971B3_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_6;
		L_6 = XRSubsystemHelpers_get_DisplaySubsystem_m6D4DE34A9756E7FAA68C879FDA7EF32F5305C2B2(/*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		// return capability == MixedRealityCapability.GGVHand;
		int32_t L_8 = ___capability0;
		return (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
	}

IL_0046:
	{
		// return capability == MixedRealityCapability.MotionController;
		int32_t L_9 = ___capability0;
		return (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
	}

IL_004b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * WindowsMixedRealityDeviceManager_GetControllerType_mC9C0D747269AC2DCD645E3A87F5B9C2847B3569A (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKGGVHand_t9D12876746FB188B0A93DA46E92C006BB5FAC38E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1024))))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0055;
	}

IL_0017:
	{
		int32_t L_3 = ___supportedControllerType0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_4 = ___supportedControllerType0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0055;
	}

IL_0029:
	{
		// return typeof(WindowsMixedRealityXRSDKMotionController);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		// return typeof(HPMotionController);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (HPMotionController_t020332F40AA49BD59A8E2E74D7F45EFDBE1B7E40_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_003f:
	{
		// return typeof(WindowsMixedRealityXRSDKArticulatedHand);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_004a:
	{
		// return typeof(WindowsMixedRealityXRSDKGGVHand);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKGGVHand_t9D12876746FB188B0A93DA46E92C006BB5FAC38E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0055:
	{
		// return base.GetControllerType(supportedControllerType);
		int32_t L_13 = ___supportedControllerType0;
		Type_t * L_14;
		L_14 = XRSDKDeviceManager_GetControllerType_mE4CE42638DD48A70A071A0F188136DABF5DBDDFC(__this, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetInputSourceType_m91693EE7B23F7010966F57DF5C693B8960C6DB1A (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0029;
		}
	}
	{
		goto IL_002b;
	}

IL_0017:
	{
		int32_t L_3 = ___supportedControllerType0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_4 = ___supportedControllerType0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)4096)))))
		{
			goto IL_002b;
		}
	}

IL_0027:
	{
		// return InputSourceType.Controller;
		return (int32_t)(2);
	}

IL_0029:
	{
		// return InputSourceType.Hand;
		return (int32_t)(1);
	}

IL_002b:
	{
		// return base.GetInputSourceType(supportedControllerType);
		int32_t L_5 = ___supportedControllerType0;
		int32_t L_6;
		L_6 = XRSDKDeviceManager_GetInputSourceType_mBFDA5C0E5FC6E0DF2B37BBE73C47335EC77BC8A2(__this, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetCurrentControllerType_m216C7BCD012EE2DF37F843684B6C01D42AF77E8D (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.HandTracking))
		uint32_t L_0;
		L_0 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = FlagsExtensions_IsMaskSet_m7218A6B97EF05754F7238CF9EC14B0534F7C35DD(L_0, 8, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		// if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Left) ||
		//     inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Right))
		uint32_t L_2;
		L_2 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		bool L_3;
		L_3 = FlagsExtensions_IsMaskSet_m7218A6B97EF05754F7238CF9EC14B0534F7C35DD(L_2, ((int32_t)256), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_4;
		L_4 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		bool L_5;
		L_5 = FlagsExtensions_IsMaskSet_m7218A6B97EF05754F7238CF9EC14B0534F7C35DD(L_4, ((int32_t)512), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}

IL_0035:
	{
		// return SupportedControllerType.ArticulatedHand;
		return (int32_t)(((int32_t)1024));
	}

IL_003b:
	{
		// return SupportedControllerType.GGVHand;
		return (int32_t)(((int32_t)2048));
	}

IL_0041:
	{
		// if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Controller))
		uint32_t L_6;
		L_6 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		bool L_7;
		L_7 = FlagsExtensions_IsMaskSet_m7218A6B97EF05754F7238CF9EC14B0534F7C35DD(L_6, ((int32_t)64), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		// if (!inputDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out _))
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_8 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
		bool L_9;
		L_9 = InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), L_8, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0067;
		}
	}
	{
		// return SupportedControllerType.HPMotionController;
		return (int32_t)(((int32_t)4096));
	}

IL_0067:
	{
		// return SupportedControllerType.WindowsMixedReality;
		return (int32_t)(((int32_t)32));
	}

IL_006a:
	{
		// return base.GetCurrentControllerType(inputDevice);
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_10 = ___inputDevice0;
		int32_t L_11;
		L_11 = XRSDKDeviceManager_GetCurrentControllerType_m0FE01278EFFD738EB6CDBDAD16D87316BB0E6763(__this, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::<EnableIfLoaderBecomesActive>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mE7FCD8643B8A85CBD973E7311C9413784C9AA597 (WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// await new WaitUntil(() => IsActiveLoader.HasValue);
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityDeviceManager_get_IsActiveLoader_m8F8128124D0DFFE69ADCA884E3BCA8EF0A9F0186(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider__ctor_mFE43F8424283740932D699DB1EFE13D599719A84 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m4B639F3CE37BD1A4FD049599A95561D418E0F9B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mF30D894851FF5FC972AB0DD5AB9476D2BEC171CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m5DFE6DAEB1B85294664AAD7612C96F64F322362B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile) : base(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t15E7DE31148738AE2B5D15A47C36FF48DDB1E3C6_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_mCAB2D6392AFE78CCD5A6762107127D3E7FBA617A(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// gazeSmoother = new EyeGazeSmoother();
		EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * L_4 = (EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 *)il2cpp_codegen_object_new(EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48_il2cpp_TypeInfo_var);
		EyeGazeSmoother__ctor_m9196C82836611BDEC0EE83DC9194F9FA6B220782(L_4, /*hidden argument*/NULL);
		__this->set_gazeSmoother_22(L_4);
		// gazeSmoother.OnSaccade += GazeSmoother_OnSaccade;
		EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * L_5 = __this->get_gazeSmoother_22();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, __this, (intptr_t)((intptr_t)WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m5DFE6DAEB1B85294664AAD7612C96F64F322362B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		EyeGazeSmoother_add_OnSaccade_m5F0EACB16F2A0DDB1F70B21FE2163254B3CFE5A8(L_5, L_6, /*hidden argument*/NULL);
		// gazeSmoother.OnSaccadeX += GazeSmoother_OnSaccadeX;
		EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * L_7 = __this->get_gazeSmoother_22();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m4B639F3CE37BD1A4FD049599A95561D418E0F9B9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		EyeGazeSmoother_add_OnSaccadeX_m41F4CE09F8FF51924F4D4FFDA4E534712171BBCA(L_7, L_8, /*hidden argument*/NULL);
		// gazeSmoother.OnSaccadeY += GazeSmoother_OnSaccadeY;
		EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * L_9 = __this->get_gazeSmoother_22();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, __this, (intptr_t)((intptr_t)WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mF30D894851FF5FC972AB0DD5AB9476D2BEC171CB_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		EyeGazeSmoother_add_OnSaccadeY_m920643E4F70A17B3B416963F42830F9924041FDC(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_mCF2536A743E693FD564449BB9FF96415EA591EC6 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// false;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_0), (bool)0, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::get_SmoothEyeTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityEyeGazeDataProvider_get_SmoothEyeTracking_mC5A047967153A7F6056EBD683D2085EC8E4A7988 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, const RuntimeMethod* method)
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = __this->get_U3CSmoothEyeTrackingU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::set_SmoothEyeTracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_set_SmoothEyeTracking_mFC00476A2B7DEA1F5BA8A61C445B86E50EDB0778 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CSmoothEyeTrackingU3Ek__BackingField_21(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::get_SaccadeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityEyeGazeDataProvider_get_SaccadeProvider_m14241D46213E21B5450C9D013B22A549F97EE0A4 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityEyeSaccadeProvider SaccadeProvider => gazeSmoother;
		EyeGazeSmoother_tB8BD35D2746136A235BCC6618C57B8B224B5FA48 * L_0 = __this->get_gazeSmoother_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::add_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_add_OnSaccade_mB8C5BA18E3F2BA646D63AC7B1BCC7CF0DFB6B663 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccade_23();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccade_23();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::remove_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_remove_OnSaccade_m01F9BE150E6784C1DC69A6271744CDD33C3FE327 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccade_23();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccade_23();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::GazeSmoother_OnSaccade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m5DFE6DAEB1B85294664AAD7612C96F64F322362B (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccade() => OnSaccade?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccade_23();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::add_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_add_OnSaccadeX_m7E38E4C2FB6A1E6CF1C35F95726D05270C471A5D (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeX_24();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeX_24();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::remove_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_remove_OnSaccadeX_mF002E45860745D7DC086E946BE05E6090E3FF6EE (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeX_24();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeX_24();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::GazeSmoother_OnSaccadeX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m4B639F3CE37BD1A4FD049599A95561D418E0F9B9 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccadeX() => OnSaccadeX?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeX_24();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::add_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_add_OnSaccadeY_mB430CD8A2ADC86156A268C3FDD779E33DDCDEBD5 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeY_25();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeY_25();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::remove_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_remove_OnSaccadeY_m12EE911E751DB1F32D3633560B71128537F57951 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeY_25();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeY_25();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::GazeSmoother_OnSaccadeY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mF30D894851FF5FC972AB0DD5AB9476D2BEC171CB (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccadeY() => OnSaccadeY?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeY_25();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_Enable_m73037172B1346078A68CF5BDD14EF1E6FB6A8A6C (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!IsActiveLoader.HasValue)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_mCF2536A743E693FD564449BB9FF96415EA591EC6(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// EnableIfLoaderBecomesActive();
		WindowsMixedRealityEyeGazeDataProvider_EnableIfLoaderBecomesActive_m046AECC93A5C6847D1D759E94C2A173121CAA4CA(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// else if (!IsActiveLoader.Value)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_2;
		L_2 = WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_mCF2536A743E693FD564449BB9FF96415EA591EC6(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0036:
	{
		// base.Enable();
		BaseService_Enable_m8519B781AC05519D6A0F3C6E160254302FC73EDF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_EnableIfLoaderBecomesActive_m046AECC93A5C6847D1D759E94C2A173121CAA4CA (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mADE36D682DE1771E1E8151490E75BAA5571FFC0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mADE36D682DE1771E1E8151490E75BAA5571FFC0E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mADE36D682DE1771E1E8151490E75BAA5571FFC0E_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityEyeGazeDataProvider_CheckCapability_m70E49609601CBCDF81574B9A8C957E488DE376FF (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	{
		// false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::<EnableIfLoaderBecomesActive>b__23_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityEyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__23_0_m035F694231BAA0EAA05661FF4DB36DC6B4DDD010 (WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// await new WaitUntil(() => IsActiveLoader.HasValue);
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_mCF2536A743E693FD564449BB9FF96415EA591EC6(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__ctor_m66C67D327C07BEDCE1EBD4F9FA15ECAB8A228F53 (WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 oldObserverOrigin = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_oldObserverOrigin_69(L_0);
		// private Vector3 oldObservationExtents = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_oldObservationExtents_70(L_1);
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_2 = ___spatialAwarenessSystem0;
		String_t* L_3 = ___name1;
		uint32_t L_4 = ___priority2;
		BaseMixedRealityProfile_tEC8B9AB34958AC5CDD042A38A74ED038415CF4CF * L_5 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tE038CEF24AFEF3A9E4130935EAA354A493B641A6_il2cpp_TypeInfo_var);
		GenericXRSDKSpatialMeshObserver__ctor_mF27CCCD571A53AEA4408A2C9A1147BA3C620F966(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealitySpatialMeshObserver_get_IsActiveLoader_m53DE80A89EE2917567FB625AF80415314AE20EB6 (WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// false;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_0), (bool)0, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m7390D05D5CF024C35295EAFA3F05789B2376081B (WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeType_t2CE84905D8382BA624C83B196C7071951FB80866_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t13CC57A50DBF99585F8D926D084FC1AF1D6971B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (XRSubsystemHelpers.MeshSubsystem == null
		//     || (oldObserverOrigin == ObserverOrigin
		//     && oldObservationExtents == ObservationExtents
		//     && oldObserverVolumeType == ObserverVolumeType))
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t13CC57A50DBF99585F8D926D084FC1AF1D6971B3_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_0;
		L_0 = XRSubsystemHelpers_get_MeshSubsystem_m34150FDAFDDE6CA5A79EDB4D7722579D3260C5AE(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_oldObserverOrigin_69();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = BaseSpatialObserver_get_ObserverOrigin_mF544B86AC31DFFF8B2DFFD3FCCF533204D1297C9_inline(__this, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_oldObservationExtents_70();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = BaseSpatialObserver_get_ObservationExtents_m5906CB7BFBED0988FB69067AD7FD4C6535616E65_inline(__this, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = __this->get_oldObserverVolumeType_71();
		int32_t L_8;
		L_8 = BaseSpatialObserver_get_ObserverVolumeType_mEB74CF6C01E0DA4900AA5B1BF3AC02792C27A337_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_003c;
		}
	}

IL_003b:
	{
		// return;
		return;
	}

IL_003c:
	{
		// using (ConfigureObserverVolumePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_9 = ((WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_il2cpp_TypeInfo_var))->get_ConfigureObserverVolumePerfMarker_68();
		V_1 = L_9;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_10;
		L_10 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		{
			// switch (ObserverVolumeType)
			int32_t L_11;
			L_11 = BaseSpatialObserver_get_ObserverVolumeType_mEB74CF6C01E0DA4900AA5B1BF3AC02792C27A337_inline(__this, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_11) == ((uint32_t)1))))
			{
				goto IL_006c;
			}
		}

IL_0053:
		{
			// XRSubsystemHelpers.MeshSubsystem.SetBoundingVolume(ObserverOrigin, ObservationExtents);
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t13CC57A50DBF99585F8D926D084FC1AF1D6971B3_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_12;
			L_12 = XRSubsystemHelpers_get_MeshSubsystem_m34150FDAFDDE6CA5A79EDB4D7722579D3260C5AE(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = BaseSpatialObserver_get_ObserverOrigin_mF544B86AC31DFFF8B2DFFD3FCCF533204D1297C9_inline(__this, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
			L_14 = BaseSpatialObserver_get_ObservationExtents_m5906CB7BFBED0988FB69067AD7FD4C6535616E65_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_12);
			bool L_15;
			L_15 = XRMeshSubsystem_SetBoundingVolume_mEEEFB719CE72346BF549DC5245C218F7A5699D92(L_12, L_13, L_14, /*hidden argument*/NULL);
			// break;
			goto IL_0086;
		}

IL_006c:
		{
			// Debug.LogError($"Unsupported ObserverVolumeType value {ObserverVolumeType}");
			int32_t L_16;
			L_16 = BaseSpatialObserver_get_ObserverVolumeType_mEB74CF6C01E0DA4900AA5B1BF3AC02792C27A337_inline(__this, /*hidden argument*/NULL);
			int32_t L_17 = L_16;
			RuntimeObject * L_18 = Box(VolumeType_t2CE84905D8382BA624C83B196C7071951FB80866_il2cpp_TypeInfo_var, &L_17);
			String_t* L_19;
			L_19 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C, L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_19, /*hidden argument*/NULL);
		}

IL_0086:
		{
			// oldObserverOrigin = ObserverOrigin;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
			L_20 = BaseSpatialObserver_get_ObserverOrigin_mF544B86AC31DFFF8B2DFFD3FCCF533204D1297C9_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObserverOrigin_69(L_20);
			// oldObservationExtents = ObservationExtents;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
			L_21 = BaseSpatialObserver_get_ObservationExtents_m5906CB7BFBED0988FB69067AD7FD4C6535616E65_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObservationExtents_70(L_21);
			// oldObserverVolumeType = ObserverVolumeType;
			int32_t L_22;
			L_22 = BaseSpatialObserver_get_ObserverVolumeType_mEB74CF6C01E0DA4900AA5B1BF3AC02792C27A337_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObserverVolumeType_71(L_22);
			// }
			IL2CPP_LEAVE(0xBA, FINALLY_00ac);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ac;
	}

FINALLY_00ac:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(172)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(172)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBA, IL_00ba)
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__cctor_mAA28FD966320E515EB4C35E79B05E0EDE67FC905 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker ConfigureObserverVolumePerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealitySpatialMeshObserver.ConfigureObserverVolume");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D, /*hidden argument*/NULL);
		((WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_t180096751E0105AB1A2090F58A1C5574520EA7B2_il2cpp_TypeInfo_var))->set_ConfigureObserverVolumePerfMarker_68(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__ctor_mC552296F70814ADEE102A77E7A6C9B6D3B28F26B (WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9B3B3926CD414C582F28FCA4006CA4C5601C745B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372 * G_B2_0 = NULL;
	WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372 * G_B1_0 = NULL;
	WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * G_B3_0 = NULL;
	WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372 * G_B3_1 = NULL;
	{
		// private readonly Dictionary<TrackedHandJoint, MixedRealityPose> unityJointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * L_0 = (Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB *)il2cpp_codegen_object_new(Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9B3B3926CD414C582F28FCA4006CA4C5601C745B(L_0, /*hidden argument*/Dictionary_2__ctor_m9B3B3926CD414C582F28FCA4006CA4C5601C745B_RuntimeMethod_var);
		__this->set_unityJointPoses_30(L_0);
		// private readonly List<Bone> fingerBones = new List<Bone>();
		List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_1 = (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *)il2cpp_codegen_object_new(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var);
		List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E(L_1, /*hidden argument*/List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var);
		__this->set_fingerBones_32(L_1);
		// : base(trackingState, controllerHandedness, inputSource, interactions, new ArticulatedHandDefinition(inputSource, controllerHandedness))
		int32_t L_2 = ___trackingState0;
		uint8_t L_3 = ___controllerHandedness1;
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_5 = ___interactions3;
		RuntimeObject* L_6 = ___inputSource2;
		uint8_t L_7 = ___controllerHandedness1;
		ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * L_8 = (ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 *)il2cpp_codegen_object_new(ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0_il2cpp_TypeInfo_var);
		ArticulatedHandDefinition__ctor_mE1491C0394F58905E585CCA04F50E9320BA031CE(L_8, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_m85E02A2A9C43CEDEA8FE583034DCC54871257FF3(__this, L_2, L_3, L_4, L_5, L_8, /*hidden argument*/NULL);
		// handDefinition = Definition as ArticulatedHandDefinition;
		RuntimeObject* L_9;
		L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(20 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::get_Definition() */, __this);
		__this->set_handDefinition_28(((ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 *)IsInstClass((RuntimeObject*)L_9, ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0_il2cpp_TypeInfo_var)));
		// handMeshProvider = (controllerHandedness == Handedness.Left) ? WindowsMixedRealityHandMeshProvider.Left : WindowsMixedRealityHandMeshProvider.Right;
		uint8_t L_10 = ___controllerHandedness1;
		G_B1_0 = __this;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			G_B2_0 = __this;
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * L_11;
		L_11 = WindowsMixedRealityHandMeshProvider_get_Right_m03C060CCD045A69CE29B08BBA1500C3E9F544DA5_inline(/*hidden argument*/NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		goto IL_004a;
	}

IL_0045:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * L_12;
		L_12 = WindowsMixedRealityHandMeshProvider_get_Left_mE0F7711A4802A2E97A2CA4887349602331751027_inline(/*hidden argument*/NULL);
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
	}

IL_004a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_handMeshProvider_29(G_B3_0);
		// handMeshProvider.SetInputSource(inputSource);
		WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * L_13 = __this->get_handMeshProvider_29();
		RuntimeObject* L_14 = ___inputSource2;
		NullCheck(L_13);
		WindowsMixedRealityHandMeshProvider_SetInputSource_mCBCA6858E0FE03566CF9E6244FAEE8BADC27B803(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_m91EE0F8E0EB7C67D48551FE91AB5509EFBE01618 (WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372 * __this, int32_t ___joint0, MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m38CF0FA4A12079B3A8BAB98E6441E131F65D018C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryGetJoint(TrackedHandJoint joint, out MixedRealityPose pose) => unityJointPoses.TryGetValue(joint, out pose);
		Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * L_0 = __this->get_unityJointPoses_30();
		int32_t L_1 = ___joint0;
		MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m38CF0FA4A12079B3A8BAB98E6441E131F65D018C(L_0, L_1, (MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m38CF0FA4A12079B3A8BAB98E6441E131F65D018C_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_get_IsInPointingPose_mB03DE7DE133CD45DF00017A771D6C82DAB3C6FD9 (WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsInPointingPose => handDefinition.IsInPointingPose;
		ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * L_0 = __this->get_handDefinition_28();
		NullCheck(L_0);
		bool L_1;
		L_1 = ArticulatedHandDefinition_get_IsInPointingPose_m9EDE61CC19642CF9BA4370937CF6702200675E78(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateController_mA58415BD24EA36516B53A6A7EF1CE65474735541 (WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * G_B8_0 = NULL;
	ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * G_B7_0 = NULL;
	ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * G_B11_0 = NULL;
	ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * G_B10_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	int32_t G_B16_1 = 0;
	{
		// if (!Enabled) { return; }
		bool L_0;
		L_0 = BaseController_get_Enabled_m8159FC72C7936F9453C8D8150E4EAE42120CD3AB_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Enabled) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1 = ((WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_35();
		V_1 = L_1;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2;
		L_2 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// base.UpdateController(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_3 = ___inputDevice0;
			GenericXRSDKController_UpdateController_m3A82CE6D6CBEEB727963154FD89445F07A26B740(__this, L_3, /*hidden argument*/NULL);
			// UpdateHandData(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_4 = ___inputDevice0;
			WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m03D346F3AD7EABE8AF6D6035965A4C3B4E21A7F8(__this, L_4, /*hidden argument*/NULL);
			// for (int i = 0; i < Interactions?.Length; i++)
			V_2 = 0;
			goto IL_0079;
		}

IL_0029:
		{
			// switch (Interactions[i].InputType)
			MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_5;
			L_5 = BaseController_get_Interactions_m819184740A11C309DF8EA306840AB567063B5F4C_inline(__this, /*hidden argument*/NULL);
			int32_t L_6 = V_2;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			NullCheck(L_8);
			int32_t L_9;
			L_9 = MixedRealityInteractionMapping_get_InputType_mDB7992EE3CB8C27BBC949D254F3BC96147532532_inline(L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			int32_t L_10 = V_3;
			if ((((int32_t)L_10) == ((int32_t)((int32_t)17))))
			{
				goto IL_005c;
			}
		}

IL_003c:
		{
			int32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)33)))))
			{
				goto IL_0075;
			}
		}

IL_0041:
		{
			// handDefinition?.UpdateCurrentIndexPose(Interactions[i]);
			ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * L_12 = __this->get_handDefinition_28();
			ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * L_13 = L_12;
			G_B7_0 = L_13;
			if (L_13)
			{
				G_B8_0 = L_13;
				goto IL_004d;
			}
		}

IL_004a:
		{
			goto IL_0075;
		}

IL_004d:
		{
			MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_14;
			L_14 = BaseController_get_Interactions_m819184740A11C309DF8EA306840AB567063B5F4C_inline(__this, /*hidden argument*/NULL);
			int32_t L_15 = V_2;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			NullCheck(G_B8_0);
			ArticulatedHandDefinition_UpdateCurrentIndexPose_m316F8E69BE852E02D62A73B4235961521DBA96A4(G_B8_0, L_17, /*hidden argument*/NULL);
			// break;
			goto IL_0075;
		}

IL_005c:
		{
			// handDefinition?.UpdateCurrentTeleportPose(Interactions[i]);
			ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * L_18 = __this->get_handDefinition_28();
			ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * L_19 = L_18;
			G_B10_0 = L_19;
			if (L_19)
			{
				G_B11_0 = L_19;
				goto IL_0068;
			}
		}

IL_0065:
		{
			goto IL_0075;
		}

IL_0068:
		{
			MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_20;
			L_20 = BaseController_get_Interactions_m819184740A11C309DF8EA306840AB567063B5F4C_inline(__this, /*hidden argument*/NULL);
			int32_t L_21 = V_2;
			NullCheck(L_20);
			int32_t L_22 = L_21;
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			NullCheck(G_B11_0);
			ArticulatedHandDefinition_UpdateCurrentTeleportPose_mAA9A173ED8FCA8809B9B3764C8F7BA5DD1C69454(G_B11_0, L_23, /*hidden argument*/NULL);
		}

IL_0075:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_24 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		}

IL_0079:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_25 = V_2;
			MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_26;
			L_26 = BaseController_get_Interactions_m819184740A11C309DF8EA306840AB567063B5F4C_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_27 = L_26;
			G_B14_0 = L_27;
			G_B14_1 = L_25;
			if (L_27)
			{
				G_B15_0 = L_27;
				G_B15_1 = L_25;
				goto IL_0090;
			}
		}

IL_0083:
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_28 = V_5;
			G_B16_0 = L_28;
			G_B16_1 = G_B14_1;
			goto IL_0097;
		}

IL_0090:
		{
			NullCheck(G_B15_0);
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_29;
			memset((&L_29), 0, sizeof(L_29));
			Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_29), ((int32_t)((int32_t)(((RuntimeArray*)G_B15_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
			G_B16_0 = L_29;
			G_B16_1 = G_B15_1;
		}

IL_0097:
		{
			V_4 = G_B16_0;
			int32_t L_30;
			L_30 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
			bool L_31;
			L_31 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((int32_t)G_B16_1) < ((int32_t)L_30))? 1 : 0)&(int32_t)L_31)))
			{
				goto IL_0029;
			}
		}

IL_00af:
		{
			// }
			IL2CPP_LEAVE(0xBF, FINALLY_00b1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b1;
	}

FINALLY_00b1:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(177)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(177)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m03D346F3AD7EABE8AF6D6035965A4C3B4E21A7F8 (WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBA3B430C35CBE8EF82E74479E4F2A57CDA7F1ED6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690  V_2;
	memset((&V_2), 0, sizeof(V_2));
	HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * G_B11_1 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * G_B10_1 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * G_B12_2 = NULL;
	ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * G_B17_0 = NULL;
	ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * G_B16_0 = NULL;
	{
		// using (UpdateHandDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var))->get_UpdateHandDataPerfMarker_36();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.handData, out hand))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  L_2 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_handData_49();
			bool L_3;
			L_3 = InputDevice_TryGetFeatureValue_mC71ECD9D8F61BB5D594DD9DFB33D1ED86698EC0D((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), L_2, (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_2), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0124;
			}
		}

IL_0021:
		{
			// foreach (HandFinger finger in handFingers)
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var);
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_4 = ((WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var))->get_handFingers_31();
			V_3 = L_4;
			V_4 = 0;
			goto IL_0103;
		}

IL_002f:
		{
			// foreach (HandFinger finger in handFingers)
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_5 = V_3;
			int32_t L_6 = V_4;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			int32_t L_8 = (int32_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_5 = L_8;
			// if (hand.TryGetFingerBones(finger, fingerBones))
			int32_t L_9 = V_5;
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_10 = __this->get_fingerBones_32();
			bool L_11;
			L_11 = Hand_TryGetFingerBones_mFA237811578942428A5EEA801791B1A3CE8C651A((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_2), L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_00fd;
			}
		}

IL_0049:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			V_7 = 0;
			goto IL_00b1;
		}

IL_004e:
		{
			// Bone bone = fingerBones[i];
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_12 = __this->get_fingerBones_32();
			int32_t L_13 = V_7;
			NullCheck(L_12);
			Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_14;
			L_14 = List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
			V_8 = L_14;
			// bool positionAvailable = bone.TryGetPosition(out Vector3 position);
			bool L_15;
			L_15 = Bone_TryGetPosition_m261057D3419C036E0CEE6F42398398601977DD0A((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&V_8), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
			// bool rotationAvailable = bone.TryGetRotation(out Quaternion rotation);
			bool L_16;
			L_16 = Bone_TryGetRotation_mEB7B9EED27F1BD731F9ECB467CFC3B3A475CBF69((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&V_8), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_11), /*hidden argument*/NULL);
			V_10 = L_16;
			// if (positionAvailable || rotationAvailable)
			bool L_17 = V_10;
			if (!((int32_t)((int32_t)L_15|(int32_t)L_17)))
			{
				goto IL_00ab;
			}
		}

IL_0076:
		{
			// position = MixedRealityPlayspace.TransformPoint(position);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t05C727679F26BB2D77941AA76EA5C96D3E5ABE98_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
			L_19 = MixedRealityPlayspace_TransformPoint_mCC072AE0B50094CE0E7A972B14556AA0EEE36448(L_18, /*hidden argument*/NULL);
			V_9 = L_19;
			// rotation = MixedRealityPlayspace.Rotation * rotation;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
			L_20 = MixedRealityPlayspace_get_Rotation_mECA6DB764B6DDCB25C42BC3CAD578F74629D2BD8(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21 = V_11;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
			L_22 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_20, L_21, /*hidden argument*/NULL);
			V_11 = L_22;
			// unityJointPoses[ConvertToTrackedHandJoint(finger, i)] = new MixedRealityPose(position, rotation);
			Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * L_23 = __this->get_unityJointPoses_30();
			int32_t L_24 = V_5;
			int32_t L_25 = V_7;
			int32_t L_26;
			L_26 = WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_mFE93132F85D27F44C1B72FE0CECE5AF240652830(__this, L_24, L_25, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_9;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28 = V_11;
			MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  L_29;
			memset((&L_29), 0, sizeof(L_29));
			MixedRealityPose__ctor_m69B106C5AB1ED82F8747B822124435755D7A658B((&L_29), L_27, L_28, /*hidden argument*/NULL);
			NullCheck(L_23);
			Dictionary_2_set_Item_mBA3B430C35CBE8EF82E74479E4F2A57CDA7F1ED6(L_23, L_26, L_29, /*hidden argument*/Dictionary_2_set_Item_mBA3B430C35CBE8EF82E74479E4F2A57CDA7F1ED6_RuntimeMethod_var);
		}

IL_00ab:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_30 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		}

IL_00b1:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_31 = V_7;
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_32 = __this->get_fingerBones_32();
			NullCheck(L_32);
			int32_t L_33;
			L_33 = List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_inline(L_32, /*hidden argument*/List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var);
			if ((((int32_t)L_31) < ((int32_t)L_33)))
			{
				goto IL_004e;
			}
		}

IL_00c0:
		{
			// MixedRealityPose palmPose = CurrentControllerPose;
			MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  L_34 = ((GenericXRSDKController_t17FB02DAFCD51A76EC960EDD377590337C99B368 *)__this)->get_CurrentControllerPose_12();
			V_6 = L_34;
			// palmPose.Rotation *= (ControllerHandedness == Handedness.Left ? leftPalmOffset : rightPalmOffset);
			MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * L_35 = (&V_6);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
			L_36 = MixedRealityPose_get_Rotation_m014F47B942F67521C9CBE13E2CEEF802F2326341_inline((MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF *)L_35, /*hidden argument*/NULL);
			uint8_t L_37;
			L_37 = BaseController_get_ControllerHandedness_m13C255EAC571CE06437AB8ACC18737314BC60B92_inline(__this, /*hidden argument*/NULL);
			G_B10_0 = L_36;
			G_B10_1 = L_35;
			if ((((int32_t)L_37) == ((int32_t)1)))
			{
				G_B11_0 = L_36;
				G_B11_1 = L_35;
				goto IL_00e0;
			}
		}

IL_00d9:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38 = ((WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var))->get_rightPalmOffset_33();
			G_B12_0 = L_38;
			G_B12_1 = G_B10_0;
			G_B12_2 = G_B10_1;
			goto IL_00e5;
		}

IL_00e0:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39 = ((WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var))->get_leftPalmOffset_34();
			G_B12_0 = L_39;
			G_B12_1 = G_B11_0;
			G_B12_2 = G_B11_1;
		}

IL_00e5:
		{
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40;
			L_40 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(G_B12_1, G_B12_0, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_mDCABF6481B0F04AB8B2F7A6DA77CDCFC96A83DEE_inline((MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF *)G_B12_2, L_40, /*hidden argument*/NULL);
			// unityJointPoses[TrackedHandJoint.Palm] = palmPose;
			Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * L_41 = __this->get_unityJointPoses_30();
			MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  L_42 = V_6;
			NullCheck(L_41);
			Dictionary_2_set_Item_mBA3B430C35CBE8EF82E74479E4F2A57CDA7F1ED6(L_41, 2, L_42, /*hidden argument*/Dictionary_2_set_Item_mBA3B430C35CBE8EF82E74479E4F2A57CDA7F1ED6_RuntimeMethod_var);
		}

IL_00fd:
		{
			int32_t L_43 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		}

IL_0103:
		{
			// foreach (HandFinger finger in handFingers)
			int32_t L_44 = V_4;
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_45 = V_3;
			NullCheck(L_45);
			if ((((int32_t)L_44) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
			{
				goto IL_002f;
			}
		}

IL_010d:
		{
			// handDefinition?.UpdateHandJoints(unityJointPoses);
			ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * L_46 = __this->get_handDefinition_28();
			ArticulatedHandDefinition_tFCC6FF32ACFD94A91E5B7FB1F327325E5967F7D0 * L_47 = L_46;
			G_B16_0 = L_47;
			if (L_47)
			{
				G_B17_0 = L_47;
				goto IL_0119;
			}
		}

IL_0116:
		{
			IL2CPP_LEAVE(0x134, FINALLY_0126);
		}

IL_0119:
		{
			Dictionary_2_tE426674B54CFF3CCAF252B5DDF3111CE0A95A0EB * L_48 = __this->get_unityJointPoses_30();
			NullCheck(G_B17_0);
			ArticulatedHandDefinition_UpdateHandJoints_m3DBAFF7AB8ADF2A54509A063F2FE72C3FCACF88E(G_B17_0, L_48, /*hidden argument*/NULL);
		}

IL_0124:
		{
			// }
			IL2CPP_LEAVE(0x134, FINALLY_0126);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0126;
	}

FINALLY_0126:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(294)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(294)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x134, IL_0134)
	}

IL_0134:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_mFE93132F85D27F44C1B72FE0CECE5AF240652830 (WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372 * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___finger0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_0030;
			}
			case 4:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_001c:
	{
		// case HandFinger.Thumb: return (index == 0) ? TrackedHandJoint.Wrist : TrackedHandJoint.ThumbMetacarpalJoint + index - 1;
		int32_t L_1 = ___index1;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_2)), (int32_t)1)));
	}

IL_0025:
	{
		return (int32_t)(1);
	}

IL_0027:
	{
		// case HandFinger.Index: return TrackedHandJoint.IndexMetacarpal + index;
		int32_t L_3 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)7, (int32_t)L_3)));
	}

IL_002b:
	{
		// case HandFinger.Middle: return TrackedHandJoint.MiddleMetacarpal + index;
		int32_t L_4 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)12), (int32_t)L_4)));
	}

IL_0030:
	{
		// case HandFinger.Ring: return TrackedHandJoint.RingMetacarpal + index;
		int32_t L_5 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)17), (int32_t)L_5)));
	}

IL_0035:
	{
		// case HandFinger.Pinky: return TrackedHandJoint.PinkyMetacarpal + index;
		int32_t L_6 = ___index1;
		return (int32_t)(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)22), (int32_t)L_6)));
	}

IL_003a:
	{
		// default: return TrackedHandJoint.None;
		return (int32_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__cctor_m7AB6CBE2641031F850C505072228EB1F7C2E377C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HandFinger[] handFingers = Enum.GetValues(typeof(HandFinger)) as HandFinger[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_2;
		L_2 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_1, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var))->set_handFingers_31(((HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F*)IsInst((RuntimeObject*)L_2, HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var)));
		// private static readonly Quaternion rightPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), Mathf.Sqrt(0.125f), -Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		float L_3;
		L_3 = sqrtf((0.125f));
		float L_4;
		L_4 = sqrtf((0.125f));
		float L_5;
		L_5 = sqrtf((1.5f));
		float L_6;
		L_6 = sqrtf((1.5f));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_7), L_3, L_4, ((float)((float)((-L_5))/(float)(2.0f))), ((float)((float)L_6/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var))->set_rightPalmOffset_33(L_7);
		// private static readonly Quaternion leftPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), -Mathf.Sqrt(0.125f), Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		float L_8;
		L_8 = sqrtf((0.125f));
		float L_9;
		L_9 = sqrtf((0.125f));
		float L_10;
		L_10 = sqrtf((1.5f));
		float L_11;
		L_11 = sqrtf((1.5f));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_12), L_8, ((-L_9)), ((float)((float)L_10/(float)(2.0f))), ((float)((float)L_11/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var))->set_leftPalmOffset_34(L_12);
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_13), _stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_35(L_13);
		// private static readonly ProfilerMarker UpdateHandDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateHandData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_14), _stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t356AEF3DF1EB14B85F74EA05F793B4A0876B6372_il2cpp_TypeInfo_var))->set_UpdateHandDataPerfMarker_36(L_14);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKGGVHand__ctor_m61E8FB8A87853816FD9D496E7BF3FA2F1E648F29 (WindowsMixedRealityXRSDKGGVHand_t9D12876746FB188B0A93DA46E92C006BB5FAC38E * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleHandDefinition_t5E7B267DBE9DFD8C7A4217B7E547A856D6B6DBEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, inputSource, interactions, new SimpleHandDefinition(controllerHandedness))
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		RuntimeObject* L_2 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_3 = ___interactions3;
		uint8_t L_4 = ___controllerHandedness1;
		SimpleHandDefinition_t5E7B267DBE9DFD8C7A4217B7E547A856D6B6DBEB * L_5 = (SimpleHandDefinition_t5E7B267DBE9DFD8C7A4217B7E547A856D6B6DBEB *)il2cpp_codegen_object_new(SimpleHandDefinition_t5E7B267DBE9DFD8C7A4217B7E547A856D6B6DBEB_il2cpp_TypeInfo_var);
		SimpleHandDefinition__ctor_m893D921F9F037BBFB4F7D14085F0B1A680A05AF6(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_m85E02A2A9C43CEDEA8FE583034DCC54871257FF3(__this, L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		// { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_mCCD1D14122CBF9B1E8B2A49E97659CA2F4167037 (WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityControllerDefinition_t77BE5C8C1EF9B94AAAD851F357D013BABF6B0DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(trackingState, controllerHandedness, new WindowsMixedRealityControllerDefinition(controllerHandedness), inputSource, interactions)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		uint8_t L_2 = ___controllerHandedness1;
		WindowsMixedRealityControllerDefinition_t77BE5C8C1EF9B94AAAD851F357D013BABF6B0DFE * L_3 = (WindowsMixedRealityControllerDefinition_t77BE5C8C1EF9B94AAAD851F357D013BABF6B0DFE *)il2cpp_codegen_object_new(WindowsMixedRealityControllerDefinition_t77BE5C8C1EF9B94AAAD851F357D013BABF6B0DFE_il2cpp_TypeInfo_var);
		WindowsMixedRealityControllerDefinition__ctor_m1E167C9D9C1ADCD8A9C7C45969B2848A739BD1C1(L_3, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_5 = ___interactions3;
		WindowsMixedRealityXRSDKMotionController__ctor_mC75AA923B7E989CD9DFD74799B598D77A89026D8(__this, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_mC75AA923B7E989CD9DFD74799B598D77A89026D8 (WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___definition2, RuntimeObject* ___inputSource3, MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* ___interactions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, inputSource, interactions, definition)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		RuntimeObject* L_2 = ___inputSource3;
		MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_3 = ___interactions4;
		RuntimeObject* L_4 = ___definition2;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tEFE4823928D3E2745721F76B8EAC384074DBC8EB_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_m85E02A2A9C43CEDEA8FE583034DCC54871257FF3(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateButtonData_m8CDF351B01919B44F67836E62B746694F5BAD657 (WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * __this, MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	{
		// using (UpdateButtonDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var))->get_UpdateButtonDataPerfMarker_28();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mDB7992EE3CB8C27BBC949D254F3BC96147532532_inline(L_2, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)18))))
			{
				goto IL_003a;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)22))))
			{
				goto IL_002a;
			}
		}

IL_0022:
		{
			int32_t L_6 = V_4;
			if ((((int32_t)L_6) == ((int32_t)((int32_t)24))))
			{
				goto IL_0032;
			}
		}

IL_0028:
		{
			goto IL_0042;
		}

IL_002a:
		{
			// buttonUsage = CommonUsages.primary2DAxisTouch;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_7 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxisTouch_9();
			V_2 = L_7;
			// break;
			goto IL_004c;
		}

IL_0032:
		{
			// buttonUsage = CommonUsages.primary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_8 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxisClick_8();
			V_2 = L_8;
			// break;
			goto IL_004c;
		}

IL_003a:
		{
			// buttonUsage = CommonUsages.secondary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_9 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondary2DAxisClick_10();
			V_2 = L_9;
			// break;
			goto IL_004c;
		}

IL_0042:
		{
			// base.UpdateButtonData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_10 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_11 = ___inputDevice1;
			GenericXRSDKController_UpdateButtonData_m5C82808D22403A493485BBF1E8BCE31DCADC8F43(__this, L_10, L_11, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_004c:
		{
			// if (inputDevice.TryGetFeatureValue(buttonUsage, out bool buttonPressed))
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_12 = V_2;
			bool L_13;
			L_13 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_12, (bool*)(&V_3), /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_005f;
			}
		}

IL_0058:
		{
			// interactionMapping.BoolData = buttonPressed;
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_14 = ___interactionMapping0;
			bool L_15 = V_3;
			NullCheck(L_14);
			MixedRealityInteractionMapping_set_BoolData_m888527DC925FE0F4AC7FC9F2B531AC4A9BA4990E(L_14, L_15, /*hidden argument*/NULL);
		}

IL_005f:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_16 = ___interactionMapping0;
			NullCheck(L_16);
			bool L_17;
			L_17 = MixedRealityInteractionMapping_get_Changed_mF6337FD8FF7B4B6CADDB107954FB85734BB5D3C2(L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00b5;
			}
		}

IL_0067:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_18 = ___interactionMapping0;
			NullCheck(L_18);
			bool L_19;
			L_19 = MixedRealityInteractionMapping_get_BoolData_m52553A0960C9C5D603C3CEA58E5A14FA07407484_inline(L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0093;
			}
		}

IL_006f:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
			RuntimeObject* L_20;
			L_20 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
			RuntimeObject* L_21 = L_20;
			G_B14_0 = L_21;
			if (L_21)
			{
				G_B15_0 = L_21;
				goto IL_007a;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_007a:
		{
			RuntimeObject* L_22;
			L_22 = BaseController_get_InputSource_mCAAA6BFCBFFDA002DE606EADA9A5EC686B851973_inline(__this, /*hidden argument*/NULL);
			uint8_t L_23;
			L_23 = BaseController_get_ControllerHandedness_m13C255EAC571CE06437AB8ACC18737314BC60B92_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_24 = ___interactionMapping0;
			NullCheck(L_24);
			MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_25;
			L_25 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m355C2AA09654458DEF3B6317C0DDF1415474F97C_inline(L_24, /*hidden argument*/NULL);
			NullCheck(G_B15_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var, G_B15_0, L_22, L_23, L_25);
			// }
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_0093:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
			RuntimeObject* L_26;
			L_26 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
			RuntimeObject* L_27 = L_26;
			G_B17_0 = L_27;
			if (L_27)
			{
				G_B18_0 = L_27;
				goto IL_009e;
			}
		}

IL_009b:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_009e:
		{
			RuntimeObject* L_28;
			L_28 = BaseController_get_InputSource_mCAAA6BFCBFFDA002DE606EADA9A5EC686B851973_inline(__this, /*hidden argument*/NULL);
			uint8_t L_29;
			L_29 = BaseController_get_ControllerHandedness_m13C255EAC571CE06437AB8ACC18737314BC60B92_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_30 = ___interactionMapping0;
			NullCheck(L_30);
			MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_31;
			L_31 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m355C2AA09654458DEF3B6317C0DDF1415474F97C_inline(L_30, /*hidden argument*/NULL);
			NullCheck(G_B18_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var, G_B18_0, L_28, L_29, L_31);
		}

IL_00b5:
		{
			// }
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateDualAxisData_m5C7ED16820E1E23821E17E4A9174E3513D6C0E42 (WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * __this, MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// using (UpdateDualAxisDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var))->get_UpdateDualAxisDataPerfMarker_29();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mDB7992EE3CB8C27BBC949D254F3BC96147532532_inline(L_2, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)21))))
			{
				goto IL_002c;
			}
		}

IL_0022:
		{
			goto IL_0034;
		}

IL_0024:
		{
			// axisUsage = CommonUsages.secondary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_6 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondary2DAxis_18();
			V_2 = L_6;
			// break;
			goto IL_003e;
		}

IL_002c:
		{
			// axisUsage = CommonUsages.primary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_7 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
			V_2 = L_7;
			// break;
			goto IL_003e;
		}

IL_0034:
		{
			// base.UpdateDualAxisData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_8 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_9 = ___inputDevice1;
			GenericXRSDKController_UpdateDualAxisData_mB046F42D39404F89E9D36DF3259DC49AF41E71FE(__this, L_8, L_9, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}

IL_003e:
		{
			// if (inputDevice.TryGetFeatureValue(axisUsage, out Vector2 axisData))
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_10 = V_2;
			bool L_11;
			L_11 = InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_10, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0051;
			}
		}

IL_004a:
		{
			// interactionMapping.Vector2Data = axisData;
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_12 = ___interactionMapping0;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_3;
			NullCheck(L_12);
			MixedRealityInteractionMapping_set_Vector2Data_mEF520A47CC75E3B2FD2B6D1B3586788F235D414A(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0051:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_14 = ___interactionMapping0;
			NullCheck(L_14);
			bool L_15;
			L_15 = MixedRealityInteractionMapping_get_Changed_mF6337FD8FF7B4B6CADDB107954FB85734BB5D3C2(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0081;
			}
		}

IL_0059:
		{
			// CoreServices.InputSystem?.RaisePositionInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.Vector2Data);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
			RuntimeObject* L_16;
			L_16 = CoreServices_get_InputSystem_mF1BC6A87C71157B2BFDF556079A9B189F3FCFDE9(/*hidden argument*/NULL);
			RuntimeObject* L_17 = L_16;
			G_B11_0 = L_17;
			if (L_17)
			{
				G_B12_0 = L_17;
				goto IL_0064;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}

IL_0064:
		{
			RuntimeObject* L_18;
			L_18 = BaseController_get_InputSource_mCAAA6BFCBFFDA002DE606EADA9A5EC686B851973_inline(__this, /*hidden argument*/NULL);
			uint8_t L_19;
			L_19 = BaseController_get_ControllerHandedness_m13C255EAC571CE06437AB8ACC18737314BC60B92_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_20 = ___interactionMapping0;
			NullCheck(L_20);
			MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_21;
			L_21 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m355C2AA09654458DEF3B6317C0DDF1415474F97C_inline(L_20, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * L_22 = ___interactionMapping0;
			NullCheck(L_22);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
			L_23 = MixedRealityInteractionMapping_get_Vector2Data_m06169FB8F22B70262A98E9D357FF2D0F2CAF6357_inline(L_22, /*hidden argument*/NULL);
			NullCheck(G_B12_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(42 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePositionInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_t6D453243E31F7729D3E9B49623B6B7092296E4C4_il2cpp_TypeInfo_var, G_B12_0, L_18, L_19, L_21, L_23);
		}

IL_0081:
		{
			// }
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x91, IL_0091)
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::TryRenderControllerModel(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKMotionController_TryRenderControllerModel_m062121B7B8D6E2EC54177D75B08D933744791417 (WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetControllerVisualizationProfile() == null ||
		//     !GetControllerVisualizationProfile().GetUsePlatformModelsOverride(GetType(), ControllerHandedness))
		MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111 * L_0;
		L_0 = BaseController_GetControllerVisualizationProfile_m71D75B9D8DF7CA8598546ED2A54C132099C18BC1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		MixedRealityControllerVisualizationProfile_tD8125F99121DD36E34419C7809C12578A077C111 * L_2;
		L_2 = BaseController_GetControllerVisualizationProfile_m71D75B9D8DF7CA8598546ED2A54C132099C18BC1(/*hidden argument*/NULL);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		uint8_t L_4;
		L_4 = BaseController_get_ControllerHandedness_m13C255EAC571CE06437AB8ACC18737314BC60B92_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = MixedRealityControllerVisualizationProfile_GetUsePlatformModelsOverride_m265C7210C478B47EBACB9D7F14D36DA6A4B529C6(L_2, L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}

IL_0025:
	{
		// return base.TryRenderControllerModel(controllerType, inputSourceType);
		Type_t * L_6 = ___controllerType0;
		int32_t L_7 = ___inputSourceType1;
		bool L_8;
		L_8 = BaseController_TryRenderControllerModel_m96E65D45098E5C450B594C7559058B6D19CF9646(__this, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002e:
	{
		// TryRenderControllerModelWithModelProvider();
		WindowsMixedRealityXRSDKMotionController_TryRenderControllerModelWithModelProvider_m82D591993259BA61D788D5A6D33FC380BBBC57CC(__this, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::TryRenderControllerModelWithModelProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_TryRenderControllerModelWithModelProvider_m82D591993259BA61D788D5A6D33FC380BBBC57CC (WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m607AD6B15DB3E1CE7C9CAE0508E3CEAAF2530B59_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m607AD6B15DB3E1CE7C9CAE0508E3CEAAF2530B59((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m607AD6B15DB3E1CE7C9CAE0508E3CEAAF2530B59_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__cctor_mF5C9508C0B95E0600BE81FDB925A7152AF786271 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateButtonDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateButtonData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var))->set_UpdateButtonDataPerfMarker_28(L_0);
		// private static readonly ProfilerMarker UpdateDualAxisDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateDualAxisData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663_il2cpp_TypeInfo_var))->set_UpdateDualAxisDataPerfMarker_29(L_1);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::<>n__0(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKMotionController_U3CU3En__0_m2AA1B00FB9B00DBFD7AEC72B105A75B28BC9A327 (WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___controllerType0;
		int32_t L_1 = ___inputSourceType1;
		bool L_2;
		L_2 = BaseController_TryRenderControllerModel_m96E65D45098E5C450B594C7559058B6D19CF9646(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_ISpatialCoordinateSystemPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_ISpatialCoordinateSystemPtr_m40104CB8CA97AD5839D54E72DE42EFDABFD53F87 (XRSDKWindowsMixedRealityUtilitiesProvider_t5BE2CDEA90C55FF33249F5B95D1A1B8788EC8ED9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_IHolographicFramePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_IHolographicFramePtr_mED12EBF57E42F0D8C8A87E1FB22FC21789525A88 (XRSDKWindowsMixedRealityUtilitiesProvider_t5BE2CDEA90C55FF33249F5B95D1A1B8788EC8ED9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_mDD827FD31B9DE9424917999A63BEC9768837C256 (XRSDKWindowsMixedRealityUtilitiesProvider_t5BE2CDEA90C55FF33249F5B95D1A1B8788EC8ED9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_mC23F3C80CFE90F865D70AC55549C8EB9C80996C0 (U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mB5FECED3CFA225DAE3F1612B6BF81C12F50EAD3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_m6C822F6C75A4B3E5218E58A23FC08610510FD3A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * V_1 = NULL;
	SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * V_2 = NULL;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => IsActiveLoader.HasValue);
			WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * L_3 = V_1;
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_4, L_3, (intptr_t)((intptr_t)WindowsMixedRealityCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_m6C822F6C75A4B3E5218E58A23FC08610510FD3A6_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_5 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_5, L_4, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_6;
			L_6 = AwaiterExtensions_GetAwaiter_mA3AFD1DB345C130BF701BE302DAF7654FA3EEED0(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_7 = V_2;
			NullCheck(L_7);
			bool L_8;
			L_8 = SimpleCoroutineAwaiter_get_IsCompleted_mFFFDFC33C8B0031C7531E7CCA4BE13ECAB038EB8_inline(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mB5FECED3CFA225DAE3F1612B6BF81C12F50EAD3A((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 **)(&V_2), (U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D_mB5FECED3CFA225DAE3F1612B6BF81C12F50EAD3A_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0050:
		{
			RuntimeObject * L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 *)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006c:
		{
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_14 = V_2;
			NullCheck(L_14);
			SimpleCoroutineAwaiter_GetResult_mF074C7B50AF35EA1BE937F5E5D6E81E125049FD5(L_14, /*hidden argument*/NULL);
			// if (IsActiveLoader.Value)
			WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * L_15 = V_1;
			NullCheck(L_15);
			Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_16;
			L_16 = WindowsMixedRealityCameraSettings_get_IsActiveLoader_m186427DE4AECFA7E683230FA9153CB473D1B7494(L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			bool L_17;
			L_17 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_3), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			// Enable();
			WindowsMixedRealityCameraSettings_t88C6B375E46AB4D48219F3C8E154CC63C5EE7136 * L_18 = V_1;
			NullCheck(L_18);
			VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, L_18);
		}

IL_0088:
		{
			goto IL_00a3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	} // end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_mC23F3C80CFE90F865D70AC55549C8EB9C80996C0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_mC23F3C80CFE90F865D70AC55549C8EB9C80996C0(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m8CD8448CA03BBA41B633F1C5291FCC5727CBFFE8 (U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m8CD8448CA03BBA41B633F1C5291FCC5727CBFFE8_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__4_t4946A0F651283F2DBAE6C256BDB591414583849D *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m8CD8448CA03BBA41B633F1C5291FCC5727CBFFE8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m0ACEF603806CE2E4421806810038A4725B1C5C12 (U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m89EAB79F38E5631C2A15525894251C3358EB7334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mE7FCD8643B8A85CBD973E7311C9413784C9AA597_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * V_1 = NULL;
	SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * V_2 = NULL;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => IsActiveLoader.HasValue);
			WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * L_3 = V_1;
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_4, L_3, (intptr_t)((intptr_t)WindowsMixedRealityDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mE7FCD8643B8A85CBD973E7311C9413784C9AA597_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_5 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_5, L_4, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_6;
			L_6 = AwaiterExtensions_GetAwaiter_mA3AFD1DB345C130BF701BE302DAF7654FA3EEED0(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_7 = V_2;
			NullCheck(L_7);
			bool L_8;
			L_8 = SimpleCoroutineAwaiter_get_IsCompleted_mFFFDFC33C8B0031C7531E7CCA4BE13ECAB038EB8_inline(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m89EAB79F38E5631C2A15525894251C3358EB7334((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 **)(&V_2), (U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4_m89EAB79F38E5631C2A15525894251C3358EB7334_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0050:
		{
			RuntimeObject * L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 *)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006c:
		{
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_14 = V_2;
			NullCheck(L_14);
			SimpleCoroutineAwaiter_GetResult_mF074C7B50AF35EA1BE937F5E5D6E81E125049FD5(L_14, /*hidden argument*/NULL);
			// if (IsActiveLoader.Value)
			WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * L_15 = V_1;
			NullCheck(L_15);
			Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_16;
			L_16 = WindowsMixedRealityDeviceManager_get_IsActiveLoader_m8F8128124D0DFFE69ADCA884E3BCA8EF0A9F0186(L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			bool L_17;
			L_17 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_3), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			// Enable();
			WindowsMixedRealityDeviceManager_tBDE7C0F6AA7AC70A5E9DC651A8F65E3F949B16DC * L_18 = V_1;
			NullCheck(L_18);
			VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, L_18);
		}

IL_0088:
		{
			goto IL_00a3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	} // end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m0ACEF603806CE2E4421806810038A4725B1C5C12_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m0ACEF603806CE2E4421806810038A4725B1C5C12(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_mCD977E1EBE0B82A625413ECD750C49517A637B1E (U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_mCD977E1EBE0B82A625413ECD750C49517A637B1E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__4_t5EC215EC06F673731B7E24B538814FF52D9AFDE4 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_mCD977E1EBE0B82A625413ECD750C49517A637B1E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__23_MoveNext_mAFF88E1C32EC0013826743DA0A66F8BB939A047F (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mF7E834C898FEF1C1AB730C957D6686BCDB315AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityEyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__23_0_m035F694231BAA0EAA05661FF4DB36DC6B4DDD010_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * V_1 = NULL;
	SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * V_2 = NULL;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => IsActiveLoader.HasValue);
			WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * L_3 = V_1;
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_4, L_3, (intptr_t)((intptr_t)WindowsMixedRealityEyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__23_0_m035F694231BAA0EAA05661FF4DB36DC6B4DDD010_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_5 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_5, L_4, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_6;
			L_6 = AwaiterExtensions_GetAwaiter_mA3AFD1DB345C130BF701BE302DAF7654FA3EEED0(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_7 = V_2;
			NullCheck(L_7);
			bool L_8;
			L_8 = SimpleCoroutineAwaiter_get_IsCompleted_mFFFDFC33C8B0031C7531E7CCA4BE13ECAB038EB8_inline(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mF7E834C898FEF1C1AB730C957D6686BCDB315AA0((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 **)(&V_2), (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7_mF7E834C898FEF1C1AB730C957D6686BCDB315AA0_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0050:
		{
			RuntimeObject * L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 *)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006c:
		{
			SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * L_14 = V_2;
			NullCheck(L_14);
			SimpleCoroutineAwaiter_GetResult_mF074C7B50AF35EA1BE937F5E5D6E81E125049FD5(L_14, /*hidden argument*/NULL);
			// if (IsActiveLoader.Value)
			WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * L_15 = V_1;
			NullCheck(L_15);
			Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_16;
			L_16 = WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_mCF2536A743E693FD564449BB9FF96415EA591EC6(L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			bool L_17;
			L_17 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_3), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			// Enable();
			WindowsMixedRealityEyeGazeDataProvider_t603FBA607FA40DC983D60FE60E385CA70237FB68 * L_18 = V_1;
			NullCheck(L_18);
			VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, L_18);
		}

IL_0088:
		{
			goto IL_00a3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	} // end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__23_MoveNext_mAFF88E1C32EC0013826743DA0A66F8BB939A047F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__23_MoveNext_mAFF88E1C32EC0013826743DA0A66F8BB939A047F(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__23_SetStateMachine_m27AAB691562F9B8643C1F21FB39DDECC44C52802 (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__23_SetStateMachine_m27AAB691562F9B8643C1F21FB39DDECC44C52802_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__23_t6466D7412ABF50F28A110D3E4AC98DF3039F3AA7 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__23_SetStateMachine_m27AAB691562F9B8643C1F21FB39DDECC44C52802(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_m5FC17C76C7E420CB86F1FAF9DC53D5E5B74DD3D6 (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m4FB891DFBA726FF679D13E30C52E8EFAF4FF1D52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_t923212C7B71ADAD3E3C21B99009C9612530D3FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityControllerModelHelpers_t7904588D8CED6BB0064CE8B4F79EFA84140B7B26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC2D67D9A3E041B2BCE8FE58FE1742A4A3D569B1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0067;
			}
		}

IL_0011:
		{
			// if (controllerModelProvider == null)
			WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_3 = V_1;
			NullCheck(L_3);
			WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC * L_4 = L_3->get_controllerModelProvider_30();
			if (L_4)
			{
				goto IL_002a;
			}
		}

IL_0019:
		{
			// controllerModelProvider = new WindowsMixedRealityControllerModelProvider(ControllerHandedness);
			WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_5 = V_1;
			WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_6 = V_1;
			NullCheck(L_6);
			uint8_t L_7;
			L_7 = BaseController_get_ControllerHandedness_m13C255EAC571CE06437AB8ACC18737314BC60B92_inline(L_6, /*hidden argument*/NULL);
			WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC * L_8 = (WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC *)il2cpp_codegen_object_new(WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC_il2cpp_TypeInfo_var);
			WindowsMixedRealityControllerModelProvider__ctor_m320B32E4CFCB8471B6738CBF45C950BDAF8C0836(L_8, L_7, /*hidden argument*/NULL);
			NullCheck(L_5);
			L_5->set_controllerModelProvider_30(L_8);
		}

IL_002a:
		{
			// GameObject controllerModel = await controllerModelProvider.TryGenerateControllerModelFromPlatformSDK();
			WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_9 = V_1;
			NullCheck(L_9);
			WindowsMixedRealityControllerModelProvider_tDCEE88AA433E7F491E90355643DC3D52EBC55EAC * L_10 = L_9->get_controllerModelProvider_30();
			NullCheck(L_10);
			Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * L_11;
			L_11 = WindowsMixedRealityControllerModelProvider_TryGenerateControllerModelFromPlatformSDK_mF206B85AA98F7F7BB07E87FFEA31FC4BA1154907(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_12;
			L_12 = Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631(L_11, /*hidden argument*/Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var);
			V_3 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E((TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0083;
			}
		}

IL_0044:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_15 = V_3;
			__this->set_U3CU3Eu__1_3(L_15);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m4FB891DFBA726FF679D13E30C52E8EFAF4FF1D52((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_3), (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE_m4FB891DFBA726FF679D13E30C52E8EFAF4FF1D52_RuntimeMethod_var);
			goto IL_011d;
		}

IL_0067:
		{
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_17 = __this->get_U3CU3Eu__1_3();
			V_3 = L_17;
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * L_18 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_0083:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2((TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var);
			V_2 = L_20;
			// if (this != null)
			WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_21 = V_1;
			if (!L_21)
			{
				goto IL_00df;
			}
		}

IL_008e:
		{
			// if (controllerModel != null
			//     && MixedRealityControllerModelHelpers.TryAddVisualizationScript(controllerModel, GetType(), ControllerHandedness)
			//     && TryAddControllerModelToSceneHierarchy(controllerModel))
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_23;
			L_23 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00bd;
			}
		}

IL_0097:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_2;
			WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_25 = V_1;
			NullCheck(L_25);
			Type_t * L_26;
			L_26 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_25, /*hidden argument*/NULL);
			WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_27 = V_1;
			NullCheck(L_27);
			uint8_t L_28;
			L_28 = BaseController_get_ControllerHandedness_m13C255EAC571CE06437AB8ACC18737314BC60B92_inline(L_27, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityControllerModelHelpers_t7904588D8CED6BB0064CE8B4F79EFA84140B7B26_il2cpp_TypeInfo_var);
			bool L_29;
			L_29 = MixedRealityControllerModelHelpers_TryAddVisualizationScript_mDA0C3444D21EC9BB34708A9DDF0208C85C5C15E1(L_24, L_26, L_28, /*hidden argument*/NULL);
			if (!L_29)
			{
				goto IL_00bd;
			}
		}

IL_00ab:
		{
			WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_30 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_2;
			NullCheck(L_30);
			bool L_32;
			L_32 = BaseController_TryAddControllerModelToSceneHierarchy_mB2F1BDD2A5773120E89BDE5DF2AE2037BC5D02D9(L_30, L_31, /*hidden argument*/NULL);
			if (!L_32)
			{
				goto IL_00bd;
			}
		}

IL_00b4:
		{
			// controllerModel.SetActive(true);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = V_2;
			NullCheck(L_33);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_33, (bool)1, /*hidden argument*/NULL);
			// return;
			goto IL_010a;
		}

IL_00bd:
		{
			// Debug.LogWarning("Failed to create controller model from driver; defaulting to BaseController behavior.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBC2D67D9A3E041B2BCE8FE58FE1742A4A3D569B1, /*hidden argument*/NULL);
			// base.TryRenderControllerModel(GetType(), InputSource.SourceType);
			WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_34 = V_1;
			WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_35 = V_1;
			NullCheck(L_35);
			Type_t * L_36;
			L_36 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_35, /*hidden argument*/NULL);
			WindowsMixedRealityXRSDKMotionController_tC8107E44B8E69079206A60123F40BCF7005CE663 * L_37 = V_1;
			NullCheck(L_37);
			RuntimeObject* L_38;
			L_38 = BaseController_get_InputSource_mCAAA6BFCBFFDA002DE606EADA9A5EC686B851973_inline(L_37, /*hidden argument*/NULL);
			NullCheck(L_38);
			int32_t L_39;
			L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_SourceType() */, IMixedRealityInputSource_t923212C7B71ADAD3E3C21B99009C9612530D3FE7_il2cpp_TypeInfo_var, L_38);
			NullCheck(L_34);
			bool L_40;
			L_40 = WindowsMixedRealityXRSDKMotionController_U3CU3En__0_m2AA1B00FB9B00DBFD7AEC72B105A75B28BC9A327(L_34, L_36, L_39, /*hidden argument*/NULL);
		}

IL_00df:
		{
			// if (controllerModel != null)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_42;
			L_42 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_41, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_00ef;
			}
		}

IL_00e8:
		{
			// controllerModel.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = V_2;
			NullCheck(L_43);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_43, (bool)0, /*hidden argument*/NULL);
		}

IL_00ef:
		{
			goto IL_010a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f1;
		}
		throw e;
	}

CATCH_00f1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_44 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_45 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_44, L_45, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011d;
	} // end catch (depth: 1)

IL_010a:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_46 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_46, /*hidden argument*/NULL);
	}

IL_011d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_m5FC17C76C7E420CB86F1FAF9DC53D5E5B74DD3D6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE * _thisAdjusted = reinterpret_cast<U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE *>(__this + _offset);
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_m5FC17C76C7E420CB86F1FAF9DC53D5E5B74DD3D6(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_m1AB3AE4AF5FEED6289FCF7FCEA6FB6AA0F7164EE (U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_m1AB3AE4AF5FEED6289FCF7FCEA6FB6AA0F7164EE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE * _thisAdjusted = reinterpret_cast<U3CTryRenderControllerModelWithModelProviderU3Ed__8_t9162038285E772442DDBB5E6B3226645F9F055CE *>(__this + _offset);
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_m1AB3AE4AF5FEED6289FCF7FCEA6FB6AA0F7164EE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  MixedRealityPose_get_ZeroIdentity_mEC8CE533E546C711A4729A5A71265814946BA46F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_il2cpp_TypeInfo_var);
		MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  L_0 = ((MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mDB7992EE3CB8C27BBC949D254F3BC96147532532_inline (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_mBD8251C8D2B006BDB8E503DB6BCB14E97A6AE30B_inline (MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_position_1(L_0);
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_mDCABF6481B0F04AB8B2F7A6DA77CDCFC96A83DEE_inline (MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___value0;
		__this->set_rotation_2(L_0);
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_mCAAA6BFCBFFDA002DE606EADA9A5EC686B851973_inline (BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m13C255EAC571CE06437AB8ACC18737314BC60B92_inline (BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  MixedRealityInteractionMapping_get_MixedRealityInputAction_m355C2AA09654458DEF3B6317C0DDF1415474F97C_inline (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_tBA06471AA738A1132A3FFEF7494C5AE06EFFF54A  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  MixedRealityInteractionMapping_get_PoseData_mEF373BAE5C8B71DED13443C4D08A608042BCBAAF_inline (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, const RuntimeMethod* method)
{
	{
		// return poseData;
		MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF  L_0 = __this->get_poseData_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m8159FC72C7936F9453C8D8150E4EAE42120CD3AB_inline (BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mBFBDED5615A7E4344889332838B7CD84980E908D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_mAF3CE4E9D0A830EAA0D2C52EE9B7B89122813D6D_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tA09436B1754F44734C0E49C829513083DC95C126_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObserverOrigin_mF544B86AC31DFFF8B2DFFD3FCCF533204D1297C9_inline (BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CObserverOriginU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObservationExtents_m5906CB7BFBED0988FB69067AD7FD4C6535616E65_inline (BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; // 3 meter sides / radius
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CObservationExtentsU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mEB74CF6C01E0DA4900AA5B1BF3AC02792C27A337_inline (BaseSpatialObserver_tC4B00B85D6900BE7527DAE33EB4ACE2F86F1CD94 * __this, const RuntimeMethod* method)
{
	{
		// public VolumeType ObserverVolumeType { get; set; } = VolumeType.AxisAlignedCube;
		int32_t L_0 = __this->get_U3CObserverVolumeTypeU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * WindowsMixedRealityHandMeshProvider_get_Right_m03C060CCD045A69CE29B08BBA1500C3E9F544DA5_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WindowsMixedRealityHandMeshProvider Right { get; } = new WindowsMixedRealityHandMeshProvider(Handedness.Right);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * L_0 = ((WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_il2cpp_TypeInfo_var))->get_U3CRightU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * WindowsMixedRealityHandMeshProvider_get_Left_mE0F7711A4802A2E97A2CA4887349602331751027_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WindowsMixedRealityHandMeshProvider Left { get; } = new WindowsMixedRealityHandMeshProvider(Handedness.Left);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2 * L_0 = ((WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandMeshProvider_t866C2FE5C1BE1561A3FE8CCF3FABF9015BE263E2_il2cpp_TypeInfo_var))->get_U3CLeftU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* BaseController_get_Interactions_m819184740A11C309DF8EA306840AB567063B5F4C_inline (BaseController_tCA3048786B1EEAA04492451E9D0FAA638CF92E9D * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_t08A021B70443418F9A114F921F94689DE3066912* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_m014F47B942F67521C9CBE13E2CEEF802F2326341_inline (MixedRealityPose_t9A27AAE05672995793F76985CE167AA85B8DF5AF * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_rotation_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m52553A0960C9C5D603C3CEA58E5A14FA07407484_inline (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_m06169FB8F22B70262A98E9D357FF2D0F2CAF6357_inline (MixedRealityInteractionMapping_tCAB568BC4EDA9F5B962A46C04A6FB77AF2BA91BC * __this, const RuntimeMethod* method)
{
	{
		// return vector2Data;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_vector2Data_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_mFFFDFC33C8B0031C7531E7CCA4BE13ECAB038EB8_inline (SimpleCoroutineAwaiter_tD66E4FAC3BA0E48403C47AE26AE5E6DDFA7B2C70 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m61EA3064D24BCDDB8607EFCD031DEBE993666B70_gshared_inline (BaseDataProvider_1_t38199E18DA7F6B6B5830AFCCFC0AB07436023F63 * __this, const RuntimeMethod* method)
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CServiceU3Ek__BackingField_13();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* L_2 = (BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6*)L_2, (int32_t)L_3);
		return (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
