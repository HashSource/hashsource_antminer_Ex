int __fastcall sub_1B953C(int result)
{
  int i; // r4
  _DWORD *v2; // r0
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = result;
  if ( dword_487B78 )
  {
    v2 = (_DWORD *)sub_242FF0(result);
    result = sub_2594D8(*v2, "observer_notify_solib_loaded() called\n");
  }
  for ( i = dword_487BAC; i; i = *(_DWORD *)i )
    result = (**(int (__fastcall ***)(_DWORD, int *))(i + 4))(*(_DWORD *)(*(_DWORD *)(i + 4) + 4), &v3);
  return result;
}
