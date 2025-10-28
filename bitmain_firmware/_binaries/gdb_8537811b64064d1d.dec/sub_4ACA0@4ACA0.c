int __fastcall sub_4ACA0(__int64 a1)
{
  const char *v1; // r6
  int v2; // r0
  _DWORD *v3; // r4
  int *v4; // r5
  DIR *v5; // r0
  char *v6; // r0
  const char *v7; // r0
  int v8; // r0
  _DWORD v10[4]; // [sp+Ch] [bp-10h] BYREF

  v1 = (const char *)a1;
  if ( !(_DWORD)a1 || !*(_BYTE *)a1 )
LABEL_14:
    sub_94708("Requires argument (checkpoint id to restart)", HIDWORD(a1));
  v2 = sub_14CC28(a1);
  v3 = (_DWORD *)dword_4726BC;
  if ( !dword_4726BC )
    goto LABEL_8;
  v4 = (int *)dword_4726BC;
  if ( v2 != *(_DWORD *)(dword_4726BC + 28) )
  {
    while ( 1 )
    {
      v4 = (int *)*v4;
      if ( !v4 )
        break;
      if ( v2 == v4[7] )
        goto LABEL_9;
    }
LABEL_8:
    sub_94708("Not found: checkpoint id %s", v1);
  }
LABEL_9:
  v10[0] = dword_4878EC;
  v10[1] = dword_4878F0;
  v10[2] = dword_4878F4;
  while ( !sub_98FA0(v3 + 1, v10) )
  {
    v3 = (_DWORD *)*v3;
    if ( !v3 )
    {
      a1 = sub_94728(
             "linux-fork.c",
             749,
             "%s: Assertion `%s' failed.",
             "void linux_fork_context(fork_info*, int)",
             "oldfp != NULL");
      goto LABEL_14;
    }
  }
  v5 = sub_4A9EC((int)v3);
  sub_CDB08(v5);
  v6 = sub_4A8EC(v4);
  sub_D80AC(v6);
  v7 = (const char *)sub_230984(dword_4878EC, dword_4878F0, dword_4878F4);
  sub_259F38("Switching to %s\n", v7);
  v8 = sub_15F810(0);
  return sub_20E810(v8, 1, 1);
}
