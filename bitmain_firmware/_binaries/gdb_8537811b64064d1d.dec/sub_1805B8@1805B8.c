void __fastcall sub_1805B8(const char *a1, int a2)
{
  int v4; // r0
  char *v5; // r4
  unsigned int v6; // r5
  char *v7; // r0
  __int64 v8; // r0
  _DWORD *v9; // r4
  int v10; // r0
  int v11; // r0
  const char *v12; // r0
  char *v13; // r6
  const char *v14; // r0
  int v15; // [sp+4h] [bp-30h]
  const char *v16; // [sp+4h] [bp-30h]
  _DWORD v17[5]; // [sp+8h] [bp-2Ch] BYREF
  int v18; // [sp+1Ch] [bp-18h] BYREF
  void *ptr; // [sp+20h] [bp-14h] BYREF
  int v20[4]; // [sp+24h] [bp-10h] BYREF

  v4 = sub_243C5C(a1);
  if ( !sub_22EBE4(v4) )
    sub_94708("The program is not being run.");
  sub_17E890();
  sub_17E8AC();
  sub_17E8EC();
  sub_17EBFC(&ptr, a1, &v18);
  v5 = (char *)ptr;
  sub_18012C((int)&dword_4899A0, v18);
  if ( !v5 )
    sub_51EC4("signal number");
  v6 = sub_99AB0(v5);
  if ( v6 != 143 )
  {
LABEL_4:
    if ( dword_487950 )
      goto LABEL_5;
    goto LABEL_16;
  }
  v8 = sub_14CC28((int)v5);
  if ( (_DWORD)v8 )
  {
    v6 = sub_1890C8(v8, HIDWORD(v8));
    goto LABEL_4;
  }
  v6 = dword_487950;
  if ( !dword_487950 )
  {
LABEL_16:
    sub_187C68(v17, 0);
    v9 = (_DWORD *)dword_48A4D4;
    v20[0] = v17[0];
    v20[1] = v17[1];
    v20[2] = v17[2];
    if ( dword_48A4D4 )
    {
      v15 = 0;
      do
      {
        if ( v9[11] != 2 && !sub_98FA0(v9 + 2, &dword_4878EC) && sub_99074(v9 + 2, v20) )
        {
          v10 = v9[36];
          if ( v10 )
          {
            if ( sub_189000(v10) )
            {
              if ( !v15 )
                sub_259880("Note:\n");
              v16 = (const char *)sub_240150(v9);
              v13 = sub_99A74(v9[36]);
              v14 = sub_99A50(v9[36]);
              sub_259880("  Thread %s previously stopped with signal %s, %s.\n", v16, v13, v14);
              v15 = 1;
            }
          }
        }
        v9 = (_DWORD *)v9[1];
      }
      while ( v9 );
      if ( v15 )
      {
        v11 = ((int (*)(void))loc_23DC0C)();
        v12 = (const char *)sub_240150(v11);
        if ( !sub_25A40C(
                "Continuing thread %s (the current thread) with specified signal will\n"
                "still deliver the signals noted above to their respective threads.\n"
                "Continue anyway? ",
                v12) )
          sub_94708("Not confirmed.");
      }
    }
LABEL_5:
    if ( !a2 )
      goto LABEL_8;
    if ( v6 )
    {
      v7 = sub_99A74(v6);
      sub_259F38("Continuing with signal %s.\n", v7);
      goto LABEL_8;
    }
    goto LABEL_14;
  }
  if ( a2 )
LABEL_14:
    sub_259F38("Continuing with no signal.\n");
  v6 = 0;
LABEL_8:
  sub_187D98(0);
  sub_18BAFC(-1, v6);
  if ( ptr )
    free(ptr);
}
