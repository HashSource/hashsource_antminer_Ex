unsigned int sub_B3F30()
{
  int (**v0)(); // r0
  int v2; // [sp+4h] [bp-10h] BYREF
  _DWORD *all_created_runtime; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v2 = 0;
  all_created_runtime = get_all_created_runtime(&v2);
  for ( i = 0; i < v2; ++i )
  {
    (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 24))(all_created_runtime[i]);
    v0 = dev_ctrl();
    ((void (__fastcall *)(_DWORD))v0[8])(*(_DWORD *)(all_created_runtime[i] + 264));
  }
  return power_off();
}
