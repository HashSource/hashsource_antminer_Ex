int __fastcall set_baud(int a1)
{
  int v1; // r4
  char *all_created_runtime; // r0
  char *v4; // r5
  int v5; // t1
  int v6; // r0
  int v8; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  v8 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v8);
  if ( v8 > 0 )
  {
    v4 = all_created_runtime - 4;
    do
    {
      v5 = *((_DWORD *)v4 + 1);
      v4 += 4;
      ++v1;
      (*(void (**)(void))(v5 + 76))();
      all_created_runtime = (char *)usleep(0x2710u);
    }
    while ( v8 > v1 );
  }
  v6 = dev_ctrl(all_created_runtime);
  (*(void (__fastcall **)(int))(v6 + 16))(a1);
  return usleep(0x2710u);
}
