int __fastcall sub_1F49A4(const char *a1, int a2, int a3, int a4)
{
  int v8; // r0
  _DWORD *v9; // r5
  _BOOL4 v10; // r0
  void *v11; // r0
  void *v12; // r0
  int v13; // r3
  int v14; // r0
  int *v15; // r3
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r0
  int v20; // r0
  void *v21; // r4
  int v22; // r0
  int v23; // r0
  int result; // r0
  int v25; // r2
  int v26; // r1
  bool v27; // zf

  v8 = sub_16F67C((int)a1);
  ((void (__fastcall *)(int))loc_1E2798)(v8);
  v9 = (_DWORD *)dword_488C94;
  if ( !a1 )
    sub_94708(
      "To open a remote debug connection, you need to specify what\n"
      "serial device is attached to the remote system\n"
      "(e.g. /dev/ttyS0, /dev/ttya, COM1, etc.).");
  if ( !dword_46DBD8 )
    dword_46DB4C = 1;
  if ( *(_DWORD *)(dword_488C94 + 56) )
  {
    v10 = sub_183CD0() == 0;
    if ( !a2 )
      v10 = 0;
    if ( v10 && !sub_25A40C("Already connected to a remote target.  Disconnect? ") )
      sub_94708("Still connected.");
  }
  sub_231DD4(a2);
  v11 = (void *)v9[22];
  if ( v11 )
    free(v11);
  v12 = (void *)v9[23];
  v9[22] = 0;
  if ( v12 )
    free(v12);
  v9[23] = 0;
  sub_1F731C(v12);
  sub_FA48C();
  sub_215834();
  if ( !dword_489340 && !strncmp(a1, "udp:", 4u) )
  {
    sub_946D8(
      "The remote protocol may be unreliable over UDP.\n"
      "Some events may be lost, rendering further debugging impossible.");
    dword_489340 = 1;
  }
  v13 = sub_1FDDA4(a1);
  v9[14] = v13;
  if ( !v13 )
    sub_258B2C(a1);
  if ( dword_46DB60 != -1 )
  {
    if ( sub_1FE120() )
    {
      sub_1FDE2C(v9[14]);
      v9[14] = 0;
      sub_258B2C(a1);
    }
    v13 = v9[14];
  }
  sub_1FE138(v13, dword_489368);
  sub_1FE0E4(v9[14]);
  sub_1FE098(v9[14]);
  if ( a2 )
  {
    sub_259B5C("Remote debugging using ");
    sub_259B5C(a1);
    sub_259B5C(&word_356660);
  }
  sub_231BA0(a3);
  dword_488C6C = (int)sub_153298((int)sub_1E1FEC, 0);
  v14 = sub_1F7DAC();
  v15 = dword_4886EC;
  v9[102] = v14;
  do
  {
    v15[3] = 0;
    v15 += 4;
  }
  while ( v15 != &dword_488C6C );
  v9[4] = 0;
  v9[3] = 0;
  v9[5] = 0;
  v16 = unk_489334;
  v17 = unk_489338;
  v18 = unk_48933C;
  v9[6] = a4;
  v9[7] = 0;
  v9[12] = 0;
  v9[13] = 0;
  v9[15] = v16;
  v9[16] = v17;
  v9[17] = v18;
  v9[18] = v16;
  v9[19] = v17;
  v9[20] = v18;
  v9[32] = 1;
  v9[33] = 1;
  v9[26] = 0;
  v9[21] = -1;
  v19 = sub_16F67C(v16);
  ((void (__fastcall *)(int))loc_1E2798)(v19);
  v27 = dword_46DBD8 == 0;
  *(_DWORD *)(dword_488C94 + 432) = -1;
  if ( !v27 )
    dword_46DB4C = 0;
  v20 = sub_201A68(0, 0);
  sub_23E17C(v20);
  v21 = sub_92E50();
  ((void (__fastcall *)(int, int, int))loc_1F3A30)(a2, a3, a4);
  v22 = sub_92E68((int)v21);
  v23 = sub_16F67C(v22);
  result = ((int (__fastcall *)(int))loc_1E2798)(v23);
  v25 = dword_46DBD8;
  v26 = dword_488C94;
  v27 = dword_46DBD8 == 0;
  *(_DWORD *)(dword_488C94 + 412) = 0;
  if ( !v27 )
    v25 = 1;
  *(_DWORD *)(v26 + 416) = 0;
  *(_DWORD *)(v26 + 420) = 0;
  if ( !v27 )
    dword_46DB4C = v25;
  return result;
}
