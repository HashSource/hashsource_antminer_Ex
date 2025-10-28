int sub_2B1CC()
{
  int v0; // r4
  int result; // r0
  int v2; // r5
  int v3; // r0
  int v4; // t1
  int v5; // [sp+4h] [bp-8h] BYREF

  v0 = 0;
  v5 = 0;
  result = get_all_created_runtime(&v5);
  if ( v5 > 0 )
  {
    v2 = result - 4;
    do
    {
      v3 = dev_ctrl(result);
      v4 = *(_DWORD *)(v2 + 4);
      v2 += 4;
      ++v0;
      result = (*(int (__fastcall **)(_DWORD))(v3 + 72))(*(_DWORD *)(v4 + 136));
    }
    while ( v5 > v0 );
  }
  return result;
}
