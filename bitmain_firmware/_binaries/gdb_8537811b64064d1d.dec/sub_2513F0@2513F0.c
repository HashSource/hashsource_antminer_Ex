__int64 __fastcall sub_2513F0(void (__fastcall ***a1)(char **, _DWORD, int, int, _DWORD), int a2, int a3)
{
  __int64 v3; // r4
  char *nptr; // [sp+8h] [bp-1Ch] BYREF
  char v6; // [sp+10h] [bp-14h] BYREF

  (**a1)(&nptr, a1, a2, a3, 0);
  v3 = strtoll(nptr, 0, 10);
  if ( nptr != &v6 )
    sub_339E8C(nptr);
  return v3;
}
