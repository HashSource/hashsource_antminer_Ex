int __fastcall sub_92838(int a1, int a2, int a3)
{
  int v5; // r3
  int v7; // r4
  int v9; // r0
  int *v10; // r0
  char *v11; // r0
  int *v12; // r0
  char *v13; // r0
  int v14; // r0
  int v15; // [sp+8h] [bp-E8h] BYREF
  int v16; // [sp+Ch] [bp-E4h]
  int v17; // [sp+10h] [bp-E0h]
  char v18[108]; // [sp+14h] [bp-DCh] BYREF
  struct sockaddr v19[7]; // [sp+80h] [bp-70h] BYREF

  v5 = dword_475200;
  if ( !dword_475200 )
  {
    if ( sub_230218(dword_4751F4, &dword_475200) )
      sub_946D8("Error reading helper thread's id in lib");
    v5 = dword_475200;
  }
  sub_98F70(&v15, a1, v5, 0);
  if ( sub_2304AC(dword_4751F8, a2, a3) )
  {
    v7 = -1;
    sub_946D8("unable to write");
  }
  else
  {
    sub_9274C((int)"agent: resumed helper thread\n");
    sub_232034(v15, v16, v17);
    if ( (unsigned int)sub_93198(v18, 108, "%s/gdb_ust%d", "/tmp", a1) > 0x6B )
      return -1;
    v7 = sub_96980(1, 1, 0);
    if ( v7 == -1 )
    {
      v10 = _errno_location();
      v11 = strerror(*v10);
      sub_946D8("error opening sync socket: %s", v11);
      return v7;
    }
    v19[0].sa_family = 1;
    if ( (unsigned int)sub_93198(v19[0].sa_data, 108, "%s", v18) > 0x6B )
    {
      sub_946D8("string overflow allocating socket name");
      v9 = v7;
      v7 = -1;
      close(v9);
      return v7;
    }
    if ( connect(v7, v19, 0x6Eu) == -1 )
    {
      v12 = _errno_location();
      v13 = strerror(*v12);
      sub_946D8(
        "error connecting sync socket (%s): %s. Make sure the directory exists and that it is writable.",
        v18,
        v13);
      v14 = v7;
      v7 = -1;
      close(v14);
      return v7;
    }
    if ( v7 < 0 )
    {
      return -1;
    }
    else
    {
      LOBYTE(v19[0].sa_family) = 0;
      sub_9274C((int)"agent: signalling helper thread\n");
      while ( write(v7, v19, 1u) == -1 && *_errno_location() == 4 )
        ;
      sub_9274C((int)"agent: waiting for helper thread's response\n");
      while ( read(v7, v19, 1u) == -1 && *_errno_location() == 4 )
        ;
      close(v7);
      sub_9274C((int)"agent: helper thread's response received\n");
      if ( !sub_98FA0(&v15, &dword_475848) )
      {
        sub_9274C((int)"agent: stop helper thread\n");
        sub_231FAC(v15, v16, v17);
      }
      v7 = sub_230048(dword_4751F8, a2, 1024);
      if ( v7 )
      {
        v7 = -1;
        sub_946D8("Error reading command response");
      }
    }
  }
  return v7;
}
