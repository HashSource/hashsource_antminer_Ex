int stop_mining_base()
{
  int (**v1)(); // r0
  int (**v2)(); // r0
  int v4; // [sp+8h] [bp-14h] BYREF
  _DWORD *all_created_runtime; // [sp+Ch] [bp-10h]
  int i; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  v7 = 0;
  v4 = 0;
  all_created_runtime = get_all_created_runtime(&v4);
  for ( i = 0; i < v4; ++i )
  {
    if ( !all_created_runtime[i] )
    {
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v7 = (*(int (__fastcall **)(_DWORD))(all_created_runtime[i] + 24))(all_created_runtime[i]);
    if ( v7 )
      return v7;
    v1 = dev_ctrl();
    ((void (__fastcall *)(int))v1[8])(i);
    usleep((__useconds_t)&stru_186A0);
  }
  v2 = dev_ctrl();
  ((void (__fastcall *)(Elf32_Sym *))v2[5])(&stru_1C200);
  usleep(0x2710u);
  return v7;
}
