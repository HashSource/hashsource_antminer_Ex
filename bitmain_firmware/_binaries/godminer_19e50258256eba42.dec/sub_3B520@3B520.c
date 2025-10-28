_DWORD *sub_3B520()
{
  _DWORD *result; // r0
  int (**v1)(); // r0
  int v2; // [sp+4h] [bp-10h] BYREF
  _DWORD *v3; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v2 = 0;
  result = get_all_created_runtime(&v2);
  v3 = result;
  for ( i = 0; i < v2; ++i )
  {
    v1 = dev_ctrl();
    result = (_DWORD *)((int (__fastcall *)(_DWORD))v1[25])(*(_DWORD *)(v3[i] + 264));
  }
  return result;
}
