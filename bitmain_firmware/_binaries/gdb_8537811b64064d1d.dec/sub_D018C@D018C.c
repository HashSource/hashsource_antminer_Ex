void __noreturn sub_D018C(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        ...)
{
  int v11; // r0
  va_list va; // [sp+1Ch] [bp+1Ch] BYREF

  va_start(va, a11);
  ((void (__fastcall *)(char *))loc_23FCB4)((char *)va);
  v11 = ((int (__fastcall *)(int))loc_1CD2B8)(a11);
  sub_339024(v11);
}
