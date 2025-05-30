/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSTransformStreamDefaultController.h"

#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMBuiltinConstructor.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>

namespace WebCore {
using namespace JSC;

// Functions

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsTransformStreamDefaultControllerConstructor);

class JSTransformStreamDefaultControllerPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTransformStreamDefaultControllerPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTransformStreamDefaultControllerPrototype* ptr = new (NotNull, JSC::allocateCell<JSTransformStreamDefaultControllerPrototype>(vm)) JSTransformStreamDefaultControllerPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSTransformStreamDefaultControllerPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTransformStreamDefaultControllerPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSTransformStreamDefaultControllerPrototype, JSTransformStreamDefaultControllerPrototype::Base);

using JSTransformStreamDefaultControllerDOMConstructor = JSDOMBuiltinConstructor<JSTransformStreamDefaultController>;

template<> const ClassInfo JSTransformStreamDefaultControllerDOMConstructor::s_info = { "TransformStreamDefaultController"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTransformStreamDefaultControllerDOMConstructor) };

template<> JSValue JSTransformStreamDefaultControllerDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTransformStreamDefaultControllerDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "TransformStreamDefaultController"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSTransformStreamDefaultController::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

template<> FunctionExecutable* JSTransformStreamDefaultControllerDOMConstructor::initializeExecutable(VM& vm)
{
    return transformStreamDefaultControllerInitializeTransformStreamDefaultControllerCodeGenerator(vm);
}

/* Hash table for prototype */

static const HashTableValue JSTransformStreamDefaultControllerPrototypeTableValues[] = {
    { "constructor"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsTransformStreamDefaultControllerConstructor, 0 } },
    { "desiredSize"_s, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::Accessor | JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinAccessorType, transformStreamDefaultControllerDesiredSizeCodeGenerator, 0 } },
    { "enqueue"_s, static_cast<unsigned>(JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, transformStreamDefaultControllerEnqueueCodeGenerator, 0 } },
    { "error"_s, static_cast<unsigned>(JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, transformStreamDefaultControllerErrorCodeGenerator, 0 } },
    { "terminate"_s, static_cast<unsigned>(JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, transformStreamDefaultControllerTerminateCodeGenerator, 0 } },
};

const ClassInfo JSTransformStreamDefaultControllerPrototype::s_info = { "TransformStreamDefaultController"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTransformStreamDefaultControllerPrototype) };

void JSTransformStreamDefaultControllerPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTransformStreamDefaultController::info(), JSTransformStreamDefaultControllerPrototypeTableValues, *this);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSTransformStreamDefaultController::s_info = { "TransformStreamDefaultController"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTransformStreamDefaultController) };

JSTransformStreamDefaultController::JSTransformStreamDefaultController(Structure* structure, JSDOMGlobalObject& globalObject)
    : JSDOMObject(structure, globalObject)
{
}

void JSTransformStreamDefaultController::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSTransformStreamDefaultController::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    auto* structure = JSTransformStreamDefaultControllerPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype());
    structure->setMayBePrototype(true);
    return JSTransformStreamDefaultControllerPrototype::create(vm, &globalObject, structure);
}

JSObject* JSTransformStreamDefaultController::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTransformStreamDefaultController>(vm, globalObject);
}

JSValue JSTransformStreamDefaultController::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTransformStreamDefaultControllerDOMConstructor, DOMConstructorID::TransformStreamDefaultController>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTransformStreamDefaultController::destroy(JSC::JSCell* cell)
{
    JSTransformStreamDefaultController* thisObject = static_cast<JSTransformStreamDefaultController*>(cell);
    thisObject->JSTransformStreamDefaultController::~JSTransformStreamDefaultController();
}

JSC_DEFINE_CUSTOM_GETTER(jsTransformStreamDefaultControllerConstructor, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName))
{
    auto& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTransformStreamDefaultControllerPrototype*>(JSValue::decode(thisValue));
    if (!prototype) [[unlikely]]
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSTransformStreamDefaultController::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

JSC::GCClient::IsoSubspace* JSTransformStreamDefaultController::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSTransformStreamDefaultController, UseCustomHeapCellType::No>(
        vm,
        [](auto& spaces) { return spaces.m_clientSubspaceForTransformStreamDefaultController.get(); },
        [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForTransformStreamDefaultController = std::forward<decltype(space)>(space); },
        [](auto& spaces) { return spaces.m_subspaceForTransformStreamDefaultController.get(); },
        [](auto& spaces, auto&& space) { spaces.m_subspaceForTransformStreamDefaultController = std::forward<decltype(space)>(space); });
}
}
