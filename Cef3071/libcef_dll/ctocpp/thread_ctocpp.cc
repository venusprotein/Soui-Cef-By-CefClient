// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=ac4acfafda72e57c9bd261be73e8d47fd30ebc0e$
//

#include "libcef_dll/ctocpp/thread_ctocpp.h"
#include "libcef_dll/ctocpp/task_runner_ctocpp.h"

// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefThread> CefThread::CreateThread(
    const CefString& display_name,
    cef_thread_priority_t priority,
    cef_message_loop_type_t message_loop_type,
    bool stoppable,
    cef_com_init_mode_t com_init_mode) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: display_name

  // Execute
  cef_thread_t* _retval =
      cef_thread_create(display_name.GetStruct(), priority, message_loop_type,
                        stoppable, com_init_mode);

  // Return type: refptr_same
  return CefThreadCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

CefRefPtr<CefTaskRunner> CefThreadCToCpp::GetTaskRunner() {
  cef_thread_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_task_runner))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_task_runner_t* _retval = _struct->get_task_runner(_struct);

  // Return type: refptr_same
  return CefTaskRunnerCToCpp::Wrap(_retval);
}

cef_platform_thread_id_t CefThreadCToCpp::GetPlatformThreadId() {
  cef_thread_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_platform_thread_id))
    return kInvalidPlatformThreadId;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_platform_thread_id_t _retval = _struct->get_platform_thread_id(_struct);

  // Return type: simple
  return _retval;
}

void CefThreadCToCpp::Stop() {
  cef_thread_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, stop))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->stop(_struct);
}

bool CefThreadCToCpp::IsRunning() {
  cef_thread_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_running))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_running(_struct);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefThreadCToCpp::CefThreadCToCpp() {}

template <>
cef_thread_t*
CefCToCppRefCounted<CefThreadCToCpp, CefThread, cef_thread_t>::UnwrapDerived(
    CefWrapperType type,
    CefThread* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount
    CefCToCppRefCounted<CefThreadCToCpp, CefThread, cef_thread_t>::DebugObjCt =
        0;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefThreadCToCpp, CefThread, cef_thread_t>::
    kWrapperType = WT_THREAD;
