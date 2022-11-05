/* iig(DriverKit-254 Sep 26 2022 11:22:31) generated from IOPCIDevice.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOPCIDevice.iig

#if KERNEL
#include <libkern/c++/OSString.h>
#else
#include <DriverKit/DriverKit.h>
#endif /* KERNEL */
#include <DriverKit/IOReturn.h>
#include <PCIDriverKit/IOPCIDevice.h>

/* @iig implementation */
   #if KERNEL
   #include <IOKit/pci/IOPCIDevice.h>
   #endif
   /* @iig end */


#if __has_builtin(__builtin_load_member_function_pointer)
#define SimpleMemberFunctionCast(cfnty, self, func) (cfnty)__builtin_load_member_function_pointer(self, func)
#else
#define SimpleMemberFunctionCast(cfnty, self, func) ({ union { typeof(func) memfun; cfnty cfun; } pair; pair.memfun = func; pair.cfun; })
#endif


struct IOPCIDevice__ManageSession_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSObjectRef  forClient;
    bool  openClient;
    IOOptionBits  openOptions;
};
#pragma pack(4)
struct IOPCIDevice__ManageSession_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t forClient__descriptor;
    IOPCIDevice__ManageSession_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice__ManageSession_Msg_ObjRefs (2)

struct IOPCIDevice__ManageSession_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOPCIDevice__ManageSession_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice__ManageSession_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice__ManageSession_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice__ManageSession_Msg * message;
        struct IOPCIDevice__ManageSession_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice__ManageSession_Invocation;
struct IOPCIDevice__CopyDeviceMemoryWithIndex_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSObjectRef  forClient;
    uint64_t  memoryIndex;
};
#pragma pack(4)
struct IOPCIDevice__CopyDeviceMemoryWithIndex_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t forClient__descriptor;
    IOPCIDevice__CopyDeviceMemoryWithIndex_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice__CopyDeviceMemoryWithIndex_Msg_ObjRefs (2)

struct IOPCIDevice__CopyDeviceMemoryWithIndex_Rpl_Content
{
    IORPCMessage __hdr;
    OSObjectRef  returnMemory;
};
#pragma pack(4)
struct IOPCIDevice__CopyDeviceMemoryWithIndex_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t returnMemory__descriptor;
    IOPCIDevice__CopyDeviceMemoryWithIndex_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice__CopyDeviceMemoryWithIndex_Rpl_ObjRefs (1)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice__CopyDeviceMemoryWithIndex_Msg * message;
        struct IOPCIDevice__CopyDeviceMemoryWithIndex_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice__CopyDeviceMemoryWithIndex_Invocation;
struct IOPCIDevice__MemoryAccess_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSObjectRef  forClient;
    uint64_t  operation;
    uint64_t  offset;
    uint64_t  data;
    IOOptionBits  options;
};
#pragma pack(4)
struct IOPCIDevice__MemoryAccess_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t forClient__descriptor;
    IOPCIDevice__MemoryAccess_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice__MemoryAccess_Msg_ObjRefs (2)

struct IOPCIDevice__MemoryAccess_Rpl_Content
{
    IORPCMessage __hdr;
    unsigned long long  readData;
};
#pragma pack(4)
struct IOPCIDevice__MemoryAccess_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice__MemoryAccess_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice__MemoryAccess_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice__MemoryAccess_Msg * message;
        struct IOPCIDevice__MemoryAccess_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice__MemoryAccess_Invocation;
struct IOPCIDevice_FindPCICapability_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    uint32_t  capabilityID;
    uint64_t  searchOffset;
};
#pragma pack(4)
struct IOPCIDevice_FindPCICapability_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_FindPCICapability_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_FindPCICapability_Msg_ObjRefs (1)

struct IOPCIDevice_FindPCICapability_Rpl_Content
{
    IORPCMessage __hdr;
    unsigned long long  foundCapabilityOffset;
};
#pragma pack(4)
struct IOPCIDevice_FindPCICapability_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_FindPCICapability_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_FindPCICapability_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_FindPCICapability_Msg * message;
        struct IOPCIDevice_FindPCICapability_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_FindPCICapability_Invocation;
struct IOPCIDevice_GetBusDeviceFunction_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
};
#pragma pack(4)
struct IOPCIDevice_GetBusDeviceFunction_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_GetBusDeviceFunction_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_GetBusDeviceFunction_Msg_ObjRefs (1)

struct IOPCIDevice_GetBusDeviceFunction_Rpl_Content
{
    IORPCMessage __hdr;
    unsigned char  returnBusNumber;
    unsigned char  returnDeviceNumber;
    unsigned char  returnFunctionNumber;
};
#pragma pack(4)
struct IOPCIDevice_GetBusDeviceFunction_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_GetBusDeviceFunction_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_GetBusDeviceFunction_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_GetBusDeviceFunction_Msg * message;
        struct IOPCIDevice_GetBusDeviceFunction_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_GetBusDeviceFunction_Invocation;
struct IOPCIDevice_HasPCIPowerManagement_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    uint64_t  state;
};
#pragma pack(4)
struct IOPCIDevice_HasPCIPowerManagement_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_HasPCIPowerManagement_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_HasPCIPowerManagement_Msg_ObjRefs (1)

struct IOPCIDevice_HasPCIPowerManagement_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOPCIDevice_HasPCIPowerManagement_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_HasPCIPowerManagement_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_HasPCIPowerManagement_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_HasPCIPowerManagement_Msg * message;
        struct IOPCIDevice_HasPCIPowerManagement_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_HasPCIPowerManagement_Invocation;
struct IOPCIDevice_EnablePCIPowerManagement_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    uint64_t  state;
};
#pragma pack(4)
struct IOPCIDevice_EnablePCIPowerManagement_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_EnablePCIPowerManagement_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_EnablePCIPowerManagement_Msg_ObjRefs (1)

struct IOPCIDevice_EnablePCIPowerManagement_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOPCIDevice_EnablePCIPowerManagement_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_EnablePCIPowerManagement_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_EnablePCIPowerManagement_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_EnablePCIPowerManagement_Msg * message;
        struct IOPCIDevice_EnablePCIPowerManagement_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_EnablePCIPowerManagement_Invocation;
struct IOPCIDevice_SaveDeviceState_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    IOOptionBits  options;
};
#pragma pack(4)
struct IOPCIDevice_SaveDeviceState_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_SaveDeviceState_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_SaveDeviceState_Msg_ObjRefs (1)

struct IOPCIDevice_SaveDeviceState_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOPCIDevice_SaveDeviceState_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_SaveDeviceState_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_SaveDeviceState_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_SaveDeviceState_Msg * message;
        struct IOPCIDevice_SaveDeviceState_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_SaveDeviceState_Invocation;
struct IOPCIDevice_RestoreDeviceState_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    IOOptionBits  options;
};
#pragma pack(4)
struct IOPCIDevice_RestoreDeviceState_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_RestoreDeviceState_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_RestoreDeviceState_Msg_ObjRefs (1)

struct IOPCIDevice_RestoreDeviceState_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOPCIDevice_RestoreDeviceState_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_RestoreDeviceState_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_RestoreDeviceState_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_RestoreDeviceState_Msg * message;
        struct IOPCIDevice_RestoreDeviceState_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_RestoreDeviceState_Invocation;
struct IOPCIDevice_GetBARInfo_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    uint8_t  barIndex;
};
#pragma pack(4)
struct IOPCIDevice_GetBARInfo_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_GetBARInfo_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_GetBARInfo_Msg_ObjRefs (1)

struct IOPCIDevice_GetBARInfo_Rpl_Content
{
    IORPCMessage __hdr;
    unsigned char  memoryIndex;
    unsigned long long  barSize;
    unsigned char  barType;
};
#pragma pack(4)
struct IOPCIDevice_GetBARInfo_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_GetBARInfo_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_GetBARInfo_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_GetBARInfo_Msg * message;
        struct IOPCIDevice_GetBARInfo_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_GetBARInfo_Invocation;
struct IOPCIDevice_SetLinkSpeed_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    IOPCILinkSpeed  linkSpeed;
    bool  retrain;
};
#pragma pack(4)
struct IOPCIDevice_SetLinkSpeed_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_SetLinkSpeed_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_SetLinkSpeed_Msg_ObjRefs (1)

struct IOPCIDevice_SetLinkSpeed_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOPCIDevice_SetLinkSpeed_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_SetLinkSpeed_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_SetLinkSpeed_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_SetLinkSpeed_Msg * message;
        struct IOPCIDevice_SetLinkSpeed_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_SetLinkSpeed_Invocation;
struct IOPCIDevice_GetLinkSpeed_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
};
#pragma pack(4)
struct IOPCIDevice_GetLinkSpeed_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_GetLinkSpeed_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_GetLinkSpeed_Msg_ObjRefs (1)

struct IOPCIDevice_GetLinkSpeed_Rpl_Content
{
    IORPCMessage __hdr;
    IOPCILinkSpeed  linkSpeed;
};
#pragma pack(4)
struct IOPCIDevice_GetLinkSpeed_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_GetLinkSpeed_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_GetLinkSpeed_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_GetLinkSpeed_Msg * message;
        struct IOPCIDevice_GetLinkSpeed_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_GetLinkSpeed_Invocation;
struct IOPCIDevice_ConfigureInterrupts_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    uint32_t  interruptType;
    uint32_t  numRequired;
    uint32_t  numRequested;
    IOOptionBits  options;
};
#pragma pack(4)
struct IOPCIDevice_ConfigureInterrupts_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_ConfigureInterrupts_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_ConfigureInterrupts_Msg_ObjRefs (1)

struct IOPCIDevice_ConfigureInterrupts_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOPCIDevice_ConfigureInterrupts_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_ConfigureInterrupts_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_ConfigureInterrupts_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_ConfigureInterrupts_Msg * message;
        struct IOPCIDevice_ConfigureInterrupts_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_ConfigureInterrupts_Invocation;
struct IOPCIDevice_Reset_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    IOOptionBits  type;
    IOOptionBits  options;
};
#pragma pack(4)
struct IOPCIDevice_Reset_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_Reset_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_Reset_Msg_ObjRefs (1)

struct IOPCIDevice_Reset_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOPCIDevice_Reset_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_Reset_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_Reset_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_Reset_Msg * message;
        struct IOPCIDevice_Reset_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_Reset_Invocation;
struct IOPCIDevice_SetASPMState_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    IOOptionBits  aspmLinkControl;
};
#pragma pack(4)
struct IOPCIDevice_SetASPMState_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOPCIDevice_SetASPMState_Msg_Content content;
};
#pragma pack()
#define IOPCIDevice_SetASPMState_Msg_ObjRefs (1)

struct IOPCIDevice_SetASPMState_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOPCIDevice_SetASPMState_Rpl
{
    IORPCMessageMach           mach;
    IOPCIDevice_SetASPMState_Rpl_Content content;
};
#pragma pack()
#define IOPCIDevice_SetASPMState_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOPCIDevice_SetASPMState_Msg * message;
        struct IOPCIDevice_SetASPMState_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOPCIDevice_SetASPMState_Invocation;
#if !KERNEL
extern OSMetaClass * gOSContainerMetaClass;
extern OSMetaClass * gOSDataMetaClass;
extern OSMetaClass * gOSNumberMetaClass;
extern OSMetaClass * gOSStringMetaClass;
extern OSMetaClass * gOSBooleanMetaClass;
extern OSMetaClass * gOSDictionaryMetaClass;
extern OSMetaClass * gOSArrayMetaClass;
extern OSMetaClass * gOSSetMetaClass;
extern OSMetaClass * gOSOrderedSetMetaClass;
extern OSMetaClass * gIODispatchQueueMetaClass;
extern OSMetaClass * gIOBufferMemoryDescriptorMetaClass;
extern OSMetaClass * gIOUserClientMetaClass;
extern OSMetaClass * gOSActionMetaClass;
extern OSMetaClass * gIOServiceStateNotificationDispatchSourceMetaClass;
extern OSMetaClass * gIOMemoryMapMetaClass;
#endif /* !KERNEL */

#if !KERNEL

#define IOPCIDevice_QueueNames  ""

#define IOPCIDevice_MethodNames  ""

#define IOPCIDeviceMetaClass_MethodNames  ""

struct OSClassDescription_IOPCIDevice_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IOPCIDevice_QueueNames)];
    char               methodNames[sizeof(IOPCIDevice_MethodNames)];
    char               metaMethodNames[sizeof(IOPCIDeviceMetaClass_MethodNames)];
};

const struct OSClassDescription_IOPCIDevice_t
OSClassDescription_IOPCIDevice =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IOPCIDevice_t),
        .name                    = "IOPCIDevice",
        .superName               = "IOService",
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IOPCIDevice_t, methodOptions),
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IOPCIDevice_t, metaMethodOptions),
        .queueNamesSize       = sizeof(IOPCIDevice_QueueNames),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IOPCIDevice_t, queueNames),
        .methodNamesSize         = sizeof(IOPCIDevice_MethodNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IOPCIDevice_t, methodNames),
        .metaMethodNamesSize     = sizeof(IOPCIDeviceMetaClass_MethodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IOPCIDevice_t, metaMethodNames),
        .flags                   = 1*kOSClassCanRemote,
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IOPCIDevice_QueueNames,
    .methodNames     = IOPCIDevice_MethodNames,
    .metaMethodNames = IOPCIDeviceMetaClass_MethodNames,
};

OSMetaClass * gIOPCIDeviceMetaClass;

static kern_return_t
IOPCIDevice_New(OSMetaClass * instance);

const OSClassLoadInformation
IOPCIDevice_Class = 
{
    .description       = &OSClassDescription_IOPCIDevice.base,
    .metaPointer       = &gIOPCIDeviceMetaClass,
    .version           = 1,
    .instanceSize      = sizeof(IOPCIDevice),

    .New               = &IOPCIDevice_New,
};

extern const void * const
gIOPCIDevice_Declaration;
const void * const
gIOPCIDevice_Declaration
__attribute__((visibility("hidden"),section("__DATA_CONST,__osclassinfo,regular,no_dead_strip"),no_sanitize("address")))
    = &IOPCIDevice_Class;

static kern_return_t
IOPCIDevice_New(OSMetaClass * instance)
{
    if (!new(instance) IOPCIDeviceMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IOPCIDeviceMetaClass::New(OSObject * instance)
{
    if (!new(instance) IOPCIDevice) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IOPCIDevice::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IOPCIDevice::_Dispatch(IOPCIDevice * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessageFromMach(rpc.message, false);

    switch (msg->msgid)
    {
#if KERNEL
        case IOPCIDevice__ManageSession_ID:
        {
            ret = IOPCIDevice::_ManageSession_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::_ManageSession_Handler, *self, &IOPCIDevice::_ManageSession_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice__CopyDeviceMemoryWithIndex_ID:
        {
            ret = IOPCIDevice::_CopyDeviceMemoryWithIndex_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::_CopyDeviceMemoryWithIndex_Handler, *self, &IOPCIDevice::_CopyDeviceMemoryWithIndex_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice__MemoryAccess_ID:
        {
            ret = IOPCIDevice::_MemoryAccess_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::_MemoryAccess_Handler, *self, &IOPCIDevice::_MemoryAccess_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOService_ClientCrashed_ID:
        {
            ret = IOService::ClientCrashed_Invoke(rpc, self, SimpleMemberFunctionCast(IOService::ClientCrashed_Handler, *self, &IOPCIDevice::ClientCrashed_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOService_SetProperties_ID:
        {
            ret = IOService::SetProperties_Invoke(rpc, self, SimpleMemberFunctionCast(IOService::SetProperties_Handler, *self, &IOPCIDevice::SetProperties_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_FindPCICapability_ID:
        {
            ret = IOPCIDevice::FindPCICapability_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::FindPCICapability_Handler, *self, &IOPCIDevice::FindPCICapability_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_GetBusDeviceFunction_ID:
        {
            ret = IOPCIDevice::GetBusDeviceFunction_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::GetBusDeviceFunction_Handler, *self, &IOPCIDevice::GetBusDeviceFunction_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_HasPCIPowerManagement_ID:
        {
            ret = IOPCIDevice::HasPCIPowerManagement_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::HasPCIPowerManagement_Handler, *self, &IOPCIDevice::HasPCIPowerManagement_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_EnablePCIPowerManagement_ID:
        {
            ret = IOPCIDevice::EnablePCIPowerManagement_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::EnablePCIPowerManagement_Handler, *self, &IOPCIDevice::EnablePCIPowerManagement_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_SaveDeviceState_ID:
        {
            ret = IOPCIDevice::SaveDeviceState_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::SaveDeviceState_Handler, *self, &IOPCIDevice::SaveDeviceState_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_RestoreDeviceState_ID:
        {
            ret = IOPCIDevice::RestoreDeviceState_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::RestoreDeviceState_Handler, *self, &IOPCIDevice::RestoreDeviceState_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_GetBARInfo_ID:
        {
            ret = IOPCIDevice::GetBARInfo_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::GetBARInfo_Handler, *self, &IOPCIDevice::GetBARInfo_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_SetLinkSpeed_ID:
        {
            ret = IOPCIDevice::SetLinkSpeed_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::SetLinkSpeed_Handler, *self, &IOPCIDevice::SetLinkSpeed_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_GetLinkSpeed_ID:
        {
            ret = IOPCIDevice::GetLinkSpeed_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::GetLinkSpeed_Handler, *self, &IOPCIDevice::GetLinkSpeed_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_ConfigureInterrupts_ID:
        {
            ret = IOPCIDevice::ConfigureInterrupts_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::ConfigureInterrupts_Handler, *self, &IOPCIDevice::ConfigureInterrupts_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_Reset_ID:
        {
            ret = IOPCIDevice::Reset_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::Reset_Handler, *self, &IOPCIDevice::Reset_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOPCIDevice_SetASPMState_ID:
        {
            ret = IOPCIDevice::SetASPMState_Invoke(rpc, self, SimpleMemberFunctionCast(IOPCIDevice::SetASPMState_Handler, *self, &IOPCIDevice::SetASPMState_Impl));
            break;
        }
#endif /* !KERNEL */

        default:
            ret = IOService::_Dispatch(self, rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
IOPCIDevice::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IOPCIDeviceMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessageFromMach(rpc.message, false);

    switch (msg->msgid)
    {

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
IOPCIDevice::_ManageSession(
        IOService * forClient,
        bool openClient,
        IOOptionBits openOptions,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice__ManageSession_Msg msg;
        struct
        {
            IOPCIDevice__ManageSession_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice__ManageSession_Msg * msg = &buf.msg;
    struct IOPCIDevice__ManageSession_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice__ManageSession_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice__ManageSession_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice__ManageSession_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->forClient__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
    msg->content.forClient = (OSObjectRef) forClient;

    msg->content.openClient = openClient;

    msg->content.openOptions = openOptions;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice__ManageSession_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice__ManageSession_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOPCIDevice::_CopyDeviceMemoryWithIndex(
        uint64_t memoryIndex,
        IOMemoryDescriptor ** returnMemory,
        IOService * forClient,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice__CopyDeviceMemoryWithIndex_Msg msg;
        struct
        {
            IOPCIDevice__CopyDeviceMemoryWithIndex_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice__CopyDeviceMemoryWithIndex_Msg * msg = &buf.msg;
    struct IOPCIDevice__CopyDeviceMemoryWithIndex_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice__CopyDeviceMemoryWithIndex_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice__CopyDeviceMemoryWithIndex_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice__CopyDeviceMemoryWithIndex_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.memoryIndex = memoryIndex;

    msg->forClient__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
    msg->content.forClient = (OSObjectRef) forClient;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice__CopyDeviceMemoryWithIndex_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice__CopyDeviceMemoryWithIndex_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *returnMemory = OSDynamicCast(IOMemoryDescriptor, (OSObject *) rpl->content.returnMemory);
        if (rpl->content.returnMemory && !*returnMemory) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOPCIDevice::_MemoryAccess(
        uint64_t operation,
        uint64_t offset,
        uint64_t data,
        uint64_t * readData,
        IOService * forClient,
        IOOptionBits options,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice__MemoryAccess_Msg msg;
        struct
        {
            IOPCIDevice__MemoryAccess_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice__MemoryAccess_Msg * msg = &buf.msg;
    struct IOPCIDevice__MemoryAccess_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice__MemoryAccess_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice__MemoryAccess_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice__MemoryAccess_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.operation = operation;

    msg->content.offset = offset;

    msg->content.data = data;

    msg->forClient__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
    msg->content.forClient = (OSObjectRef) forClient;

    msg->content.options = options;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice__MemoryAccess_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice__MemoryAccess_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        if (readData) *readData = rpl->content.readData;
    }


    return (ret);
}

kern_return_t
IOPCIDevice::FindPCICapability(
        uint32_t capabilityID,
        uint64_t searchOffset,
        uint64_t * foundCapabilityOffset,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_FindPCICapability_Msg msg;
        struct
        {
            IOPCIDevice_FindPCICapability_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_FindPCICapability_Msg * msg = &buf.msg;
    struct IOPCIDevice_FindPCICapability_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_FindPCICapability_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_FindPCICapability_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_FindPCICapability_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.capabilityID = capabilityID;

    msg->content.searchOffset = searchOffset;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_FindPCICapability_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_FindPCICapability_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        if (foundCapabilityOffset) *foundCapabilityOffset = rpl->content.foundCapabilityOffset;
    }


    return (ret);
}

kern_return_t
IOPCIDevice::GetBusDeviceFunction(
        uint8_t * returnBusNumber,
        uint8_t * returnDeviceNumber,
        uint8_t * returnFunctionNumber,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_GetBusDeviceFunction_Msg msg;
        struct
        {
            IOPCIDevice_GetBusDeviceFunction_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_GetBusDeviceFunction_Msg * msg = &buf.msg;
    struct IOPCIDevice_GetBusDeviceFunction_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_GetBusDeviceFunction_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_GetBusDeviceFunction_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_GetBusDeviceFunction_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_GetBusDeviceFunction_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_GetBusDeviceFunction_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        if (returnBusNumber) *returnBusNumber = rpl->content.returnBusNumber;
        if (returnDeviceNumber) *returnDeviceNumber = rpl->content.returnDeviceNumber;
        if (returnFunctionNumber) *returnFunctionNumber = rpl->content.returnFunctionNumber;
    }


    return (ret);
}

kern_return_t
IOPCIDevice::HasPCIPowerManagement(
        uint64_t state,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_HasPCIPowerManagement_Msg msg;
        struct
        {
            IOPCIDevice_HasPCIPowerManagement_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_HasPCIPowerManagement_Msg * msg = &buf.msg;
    struct IOPCIDevice_HasPCIPowerManagement_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_HasPCIPowerManagement_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_HasPCIPowerManagement_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_HasPCIPowerManagement_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.state = state;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_HasPCIPowerManagement_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_HasPCIPowerManagement_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOPCIDevice::EnablePCIPowerManagement(
        uint64_t state,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_EnablePCIPowerManagement_Msg msg;
        struct
        {
            IOPCIDevice_EnablePCIPowerManagement_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_EnablePCIPowerManagement_Msg * msg = &buf.msg;
    struct IOPCIDevice_EnablePCIPowerManagement_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_EnablePCIPowerManagement_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_EnablePCIPowerManagement_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_EnablePCIPowerManagement_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.state = state;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_EnablePCIPowerManagement_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_EnablePCIPowerManagement_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOPCIDevice::SaveDeviceState(
        IOOptionBits options,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_SaveDeviceState_Msg msg;
        struct
        {
            IOPCIDevice_SaveDeviceState_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_SaveDeviceState_Msg * msg = &buf.msg;
    struct IOPCIDevice_SaveDeviceState_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_SaveDeviceState_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_SaveDeviceState_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_SaveDeviceState_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.options = options;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_SaveDeviceState_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_SaveDeviceState_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOPCIDevice::RestoreDeviceState(
        IOOptionBits options,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_RestoreDeviceState_Msg msg;
        struct
        {
            IOPCIDevice_RestoreDeviceState_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_RestoreDeviceState_Msg * msg = &buf.msg;
    struct IOPCIDevice_RestoreDeviceState_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_RestoreDeviceState_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_RestoreDeviceState_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_RestoreDeviceState_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.options = options;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_RestoreDeviceState_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_RestoreDeviceState_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOPCIDevice::GetBARInfo(
        uint8_t barIndex,
        uint8_t * memoryIndex,
        uint64_t * barSize,
        uint8_t * barType,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_GetBARInfo_Msg msg;
        struct
        {
            IOPCIDevice_GetBARInfo_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_GetBARInfo_Msg * msg = &buf.msg;
    struct IOPCIDevice_GetBARInfo_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_GetBARInfo_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_GetBARInfo_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_GetBARInfo_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.barIndex = barIndex;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_GetBARInfo_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_GetBARInfo_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        if (memoryIndex) *memoryIndex = rpl->content.memoryIndex;
        if (barSize) *barSize = rpl->content.barSize;
        if (barType) *barType = rpl->content.barType;
    }


    return (ret);
}

kern_return_t
IOPCIDevice::SetLinkSpeed(
        IOPCILinkSpeed linkSpeed,
        bool retrain,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_SetLinkSpeed_Msg msg;
        struct
        {
            IOPCIDevice_SetLinkSpeed_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_SetLinkSpeed_Msg * msg = &buf.msg;
    struct IOPCIDevice_SetLinkSpeed_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_SetLinkSpeed_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_SetLinkSpeed_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_SetLinkSpeed_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.linkSpeed = linkSpeed;

    msg->content.retrain = retrain;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_SetLinkSpeed_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_SetLinkSpeed_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOPCIDevice::GetLinkSpeed(
        IOPCILinkSpeed * linkSpeed,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_GetLinkSpeed_Msg msg;
        struct
        {
            IOPCIDevice_GetLinkSpeed_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_GetLinkSpeed_Msg * msg = &buf.msg;
    struct IOPCIDevice_GetLinkSpeed_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_GetLinkSpeed_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_GetLinkSpeed_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_GetLinkSpeed_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_GetLinkSpeed_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_GetLinkSpeed_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        if (linkSpeed) *linkSpeed = rpl->content.linkSpeed;
    }


    return (ret);
}

kern_return_t
IOPCIDevice::ConfigureInterrupts(
        uint32_t interruptType,
        uint32_t numRequired,
        uint32_t numRequested,
        IOOptionBits options,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_ConfigureInterrupts_Msg msg;
        struct
        {
            IOPCIDevice_ConfigureInterrupts_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_ConfigureInterrupts_Msg * msg = &buf.msg;
    struct IOPCIDevice_ConfigureInterrupts_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_ConfigureInterrupts_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_ConfigureInterrupts_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_ConfigureInterrupts_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.interruptType = interruptType;

    msg->content.numRequired = numRequired;

    msg->content.numRequested = numRequested;

    msg->content.options = options;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_ConfigureInterrupts_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_ConfigureInterrupts_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOPCIDevice::Reset(
        IOOptionBits type,
        IOOptionBits options,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_Reset_Msg msg;
        struct
        {
            IOPCIDevice_Reset_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_Reset_Msg * msg = &buf.msg;
    struct IOPCIDevice_Reset_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_Reset_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_Reset_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_Reset_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.type = type;

    msg->content.options = options;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_Reset_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_Reset_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOPCIDevice::SetASPMState(
        IOOptionBits aspmLinkControl,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOPCIDevice_SetASPMState_Msg msg;
        struct
        {
            IOPCIDevice_SetASPMState_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOPCIDevice_SetASPMState_Msg * msg = &buf.msg;
    struct IOPCIDevice_SetASPMState_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOPCIDevice_SetASPMState_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOPCIDevice_SetASPMState_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOPCIDevice_SetASPMState_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.aspmLinkControl = aspmLinkControl;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOPCIDevice_SetASPMState_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOPCIDevice_SetASPMState_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOPCIDevice::_ManageSession_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        _ManageSession_Handler func)
{
    IOPCIDevice__ManageSession_Invocation rpc = { _rpc };
    kern_return_t ret;
    IOService * forClient;

    if (IOPCIDevice__ManageSession_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);
    forClient = OSDynamicCast(IOService, (OSObject *) rpc.message->content.forClient);
    if (!forClient && rpc.message->content.forClient) return (kIOReturnBadArgument);

    ret = (*func)(target,
        forClient,
        rpc.message->content.openClient,
        rpc.message->content.openOptions);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice__ManageSession_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice__ManageSession_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::_CopyDeviceMemoryWithIndex_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        _CopyDeviceMemoryWithIndex_Handler func)
{
    IOPCIDevice__CopyDeviceMemoryWithIndex_Invocation rpc = { _rpc };
    kern_return_t ret;
    IOService * forClient;

    if (IOPCIDevice__CopyDeviceMemoryWithIndex_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);
    forClient = OSDynamicCast(IOService, (OSObject *) rpc.message->content.forClient);
    if (!forClient && rpc.message->content.forClient) return (kIOReturnBadArgument);

    ret = (*func)(target,
        rpc.message->content.memoryIndex,
        (IOMemoryDescriptor **)&rpc.reply->content.returnMemory,
        forClient);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice__CopyDeviceMemoryWithIndex_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice__CopyDeviceMemoryWithIndex_Rpl_ObjRefs;
    rpc.reply->returnMemory__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    return (ret);
}

kern_return_t
IOPCIDevice::_MemoryAccess_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        _MemoryAccess_Handler func)
{
    IOPCIDevice__MemoryAccess_Invocation rpc = { _rpc };
    kern_return_t ret;
    IOService * forClient;

    if (IOPCIDevice__MemoryAccess_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);
    forClient = OSDynamicCast(IOService, (OSObject *) rpc.message->content.forClient);
    if (!forClient && rpc.message->content.forClient) return (kIOReturnBadArgument);

    ret = (*func)(target,
        rpc.message->content.operation,
        rpc.message->content.offset,
        rpc.message->content.data,
        &rpc.reply->content.readData,
        forClient,
        rpc.message->content.options);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice__MemoryAccess_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice__MemoryAccess_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::FindPCICapability_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        FindPCICapability_Handler func)
{
    IOPCIDevice_FindPCICapability_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_FindPCICapability_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        rpc.message->content.capabilityID,
        rpc.message->content.searchOffset,
        &rpc.reply->content.foundCapabilityOffset);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_FindPCICapability_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_FindPCICapability_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::GetBusDeviceFunction_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        GetBusDeviceFunction_Handler func)
{
    IOPCIDevice_GetBusDeviceFunction_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_GetBusDeviceFunction_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        &rpc.reply->content.returnBusNumber,
        &rpc.reply->content.returnDeviceNumber,
        &rpc.reply->content.returnFunctionNumber);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_GetBusDeviceFunction_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_GetBusDeviceFunction_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::HasPCIPowerManagement_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        HasPCIPowerManagement_Handler func)
{
    IOPCIDevice_HasPCIPowerManagement_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_HasPCIPowerManagement_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        rpc.message->content.state);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_HasPCIPowerManagement_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_HasPCIPowerManagement_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::EnablePCIPowerManagement_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        EnablePCIPowerManagement_Handler func)
{
    IOPCIDevice_EnablePCIPowerManagement_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_EnablePCIPowerManagement_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        rpc.message->content.state);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_EnablePCIPowerManagement_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_EnablePCIPowerManagement_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::SaveDeviceState_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        SaveDeviceState_Handler func)
{
    IOPCIDevice_SaveDeviceState_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_SaveDeviceState_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        rpc.message->content.options);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_SaveDeviceState_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_SaveDeviceState_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::RestoreDeviceState_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        RestoreDeviceState_Handler func)
{
    IOPCIDevice_RestoreDeviceState_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_RestoreDeviceState_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        rpc.message->content.options);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_RestoreDeviceState_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_RestoreDeviceState_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::GetBARInfo_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        GetBARInfo_Handler func)
{
    IOPCIDevice_GetBARInfo_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_GetBARInfo_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        rpc.message->content.barIndex,
        &rpc.reply->content.memoryIndex,
        &rpc.reply->content.barSize,
        &rpc.reply->content.barType);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_GetBARInfo_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_GetBARInfo_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::SetLinkSpeed_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        SetLinkSpeed_Handler func)
{
    IOPCIDevice_SetLinkSpeed_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_SetLinkSpeed_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        rpc.message->content.linkSpeed,
        rpc.message->content.retrain);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_SetLinkSpeed_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_SetLinkSpeed_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::GetLinkSpeed_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        GetLinkSpeed_Handler func)
{
    IOPCIDevice_GetLinkSpeed_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_GetLinkSpeed_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        &rpc.reply->content.linkSpeed);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_GetLinkSpeed_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_GetLinkSpeed_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::ConfigureInterrupts_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        ConfigureInterrupts_Handler func)
{
    IOPCIDevice_ConfigureInterrupts_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_ConfigureInterrupts_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        rpc.message->content.interruptType,
        rpc.message->content.numRequired,
        rpc.message->content.numRequested,
        rpc.message->content.options);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_ConfigureInterrupts_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_ConfigureInterrupts_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::Reset_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        Reset_Handler func)
{
    IOPCIDevice_Reset_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_Reset_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        rpc.message->content.type,
        rpc.message->content.options);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_Reset_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_Reset_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOPCIDevice::SetASPMState_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        SetASPMState_Handler func)
{
    IOPCIDevice_SetASPMState_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOPCIDevice_SetASPMState_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,
        rpc.message->content.aspmLinkControl);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOPCIDevice_SetASPMState_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOPCIDevice_SetASPMState_Rpl_ObjRefs;

    return (ret);
}



