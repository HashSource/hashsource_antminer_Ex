int __fastcall sub_2422B0(_DWORD *a1)
{
  __int64 v2; // r0

  if ( a1[1] )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
  v2 = sub_94728(
         (int)"thread-fsm.c",
         96,
         "%s: Assertion `%s' failed.",
         "async_reply_reason thread_fsm_async_reply_reason(thread_fsm*)",
         "thread_fsm_finished_p (self)");
  return sub_2422FC(v2, HIDWORD(v2));
}
