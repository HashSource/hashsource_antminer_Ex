void __fastcall __noreturn sub_258AD4(int a1, char *a2)
{
  void *v3; // r0
  void *ptr; // [sp+0h] [bp-18h] BYREF
  char v5; // [sp+8h] [bp-10h] BYREF

  sub_2587E8(&ptr, a2);
  ((void (__fastcall *)(_DWORD))loc_2A6C70)(0);
  *_errno_location() = 0;
  sub_92F8C(a1, "%s.", (const char *)ptr);
  v3 = ptr;
  if ( ptr != &v5 )
    sub_339E8C(ptr);
  sub_339024(v3);
}
