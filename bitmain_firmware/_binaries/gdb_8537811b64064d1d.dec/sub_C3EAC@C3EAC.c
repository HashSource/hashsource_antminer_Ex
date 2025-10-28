char *__fastcall sub_C3EAC(int a1, int a2, int a3)
{
  int v4; // r8
  char *v5; // r0
  char *v6; // r5
  _BOOL4 v7; // r8
  int v8; // r9
  int *v9; // r1
  void *v10; // r7
  void *v11; // r11
  _DWORD *v12; // r4
  void *v13; // r0
  char *result; // r0
  void *v15; // r0
  int v16; // [sp+Ch] [bp-38h]
  char *v17; // [sp+10h] [bp-34h] BYREF
  int v18; // [sp+14h] [bp-30h]
  char *endptr; // [sp+18h] [bp-2Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-28h] BYREF
  int *v21; // [sp+20h] [bp-24h]
  int *v22; // [sp+24h] [bp-20h]
  char *nptr[2]; // [sp+28h] [bp-1Ch] BYREF
  _BYTE v24[16]; // [sp+30h] [bp-14h] BYREF

  v4 = sub_53260(a3) - 1;
  v5 = (char *)sub_93634(a1);
  v6 = v5;
  v7 = v4 == 0;
  if ( v5 )
  {
    v17 = v5;
    ptr = 0;
    v21 = 0;
    v22 = 0;
    if ( *v5 )
    {
      v8 = 1;
      while ( 1 )
      {
        sub_5B084((int *)nptr, (int *)&v17);
        if ( !nptr[1] )
          break;
        if ( !sub_33CAC8((int)nptr, "all") )
        {
          v17 = (char *)sub_93634(v17);
          if ( *v17 )
            v8 = 0;
          if ( !v8 )
            sub_94708("'all' cannot be caught with other signals");
          v11 = ptr;
          v10 = v21;
          if ( ptr != v21 )
          {
            sub_94728(
              (int)"break-catch-sig.c",
              357,
              "%s: Assertion `%s' failed.",
              "std::vector<gdb_signal> catch_signal_split_args(const char*, bool*)",
              "result.empty ()");
            v15 = ptr;
            if ( ptr )
              sub_339E8C(ptr);
            sub_339024(v15);
          }
          v5 = nptr[0];
          if ( nptr[0] != v24 )
          {
            sub_339E8C(nptr[0]);
            v10 = ptr;
            v11 = v21;
          }
          goto LABEL_21;
        }
        strtol(nptr[0], &endptr, 0);
        if ( *endptr )
        {
          v18 = sub_99AB0(nptr[0]);
          if ( v18 == 143 )
            sub_94708("Unknown signal name '%s'.", nptr[0]);
        }
        else
        {
          v18 = sub_1890C8();
        }
        if ( v21 == v22 )
        {
          sub_C425C(&ptr);
        }
        else
        {
          v9 = v21 + 1;
          if ( v21 )
            *v21 = v18;
          v21 = v9;
        }
        if ( nptr[0] != v24 )
          sub_339E8C(nptr[0]);
        v8 = 0;
        if ( !*v17 )
          goto LABEL_20;
      }
      if ( nptr[0] != v24 )
        sub_339E8C(nptr[0]);
    }
LABEL_20:
    LOBYTE(v8) = 0;
    v5 = (char *)sub_C434C(&ptr);
    v10 = ptr;
    v11 = v21;
LABEL_21:
    v6 = (char *)v22;
  }
  else
  {
    v11 = 0;
    v10 = 0;
    LOBYTE(v8) = 0;
  }
  v16 = sub_B8974((int)v5);
  v12 = sub_98394(0x98u);
  memset(v12, 0, 0x98u);
  v12[4] = 1;
  *((_BYTE *)v12 + 32) = 0;
  *((_BYTE *)v12 + 33) = 0;
  v12[13] = 0;
  v12[14] = 0;
  v12[15] = 0;
  v12[16] = 0;
  v12[17] = 0;
  v12[28] = -1;
  *v12 = off_37CE60;
  sub_D026C(v12, v16, v7, 0, &unk_47826C);
  v13 = (void *)v12[34];
  v12[35] = v11;
  v12[36] = v6;
  v12[34] = v10;
  if ( v13 )
    sub_339E8C(v13);
  nptr[0] = (char *)v12;
  *((_BYTE *)v12 + 148) = v8;
  sub_D906C(0, nptr, 1);
  result = nptr[0];
  if ( nptr[0] )
    return (char *)(*(int (__fastcall **)(char *))(*(_DWORD *)nptr[0] + 4))(nptr[0]);
  return result;
}
