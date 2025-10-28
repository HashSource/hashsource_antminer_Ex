char *__fastcall sub_1E9910(int a1)
{
  int v1; // r0
  int v2; // r0
  char **v3; // r5
  size_t *v4; // r7
  char *v5; // r4
  int v6; // r9
  unsigned __int8 *v7; // r0
  unsigned int v8; // r10
  unsigned int v9; // r8
  void *v10; // r9
  int v11; // r0
  int v12; // r0
  unsigned int v14; // [sp+14h] [bp-10h] BYREF
  unsigned int v15[3]; // [sp+18h] [bp-Ch] BYREF

  v1 = sub_16F67C(a1);
  v2 = ((int (__fastcall *)(int))loc_1E2798)(v1);
  v3 = (char **)dword_488C94;
  v4 = (size_t *)(dword_488C94 + 4);
  while ( 1 )
  {
    while ( 1 )
    {
      sub_258BFC(v2);
      sub_1E4EE0(v3, v4, 0, 0, 0);
      v5 = *v3;
      v6 = (unsigned __int8)**v3;
      if ( v6 == 69 )
      {
        if ( v5[1] == 49 )
        {
          if ( v5[2] != 48 )
          {
            v12 = strtol(v5 + 2, 0, 16);
            sub_94708("remote.c: error in outgoing packet at field #%ld.", v12);
          }
          sub_94708("remote.c: error in outgoing packet.");
        }
        sub_94708("Target returns error code '%s'.", v5 + 1);
      }
      if ( strncmp(*v3, "qRelocInsn:", 0xBu) )
        break;
      v7 = sub_991B0((unsigned __int8 *)v5 + 11, v15);
      if ( *v7 != 59 )
        sub_94708("invalid qRelocInsn packet: %s", v5);
      v8 = v15[0];
      sub_991B0(v7 + 1, v15);
      v9 = v15[0];
      v14 = v15[0];
      v10 = sub_92E50();
      v11 = sub_16F67C((int)v10);
      ((void (__fastcall *)(int, unsigned int *, unsigned int))loc_16C208)(v11, &v14, v8);
      sub_92E68((int)v10);
      sub_93198(v5, (size_t)v3[1], "qRelocInsn:%x", v14 - v9);
      v2 = sub_1E7E14(v5);
    }
    if ( v6 != 79 || v5[1] == 75 )
      break;
    v2 = sub_1E1F40((unsigned __int8 *)v5 + 1);
  }
  return v5;
}
