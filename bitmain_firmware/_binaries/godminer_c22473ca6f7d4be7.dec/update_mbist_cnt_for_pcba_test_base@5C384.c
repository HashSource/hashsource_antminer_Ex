int __fastcall update_mbist_cnt_for_pcba_test_base(int a1, _DWORD *a2)
{
  int *v2; // r12
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3

  LOWORD(v2) = -20432;
  HIWORD(v2) = (unsigned int)&unk_169E20 >> 16;
  v4 = *v2;
  v5 = v2[1];
  v6 = v2[2];
  v7 = v2[3];
  v2 += 4;
  *a2 = v4;
  a2[1] = v5;
  a2[2] = v6;
  a2[3] = v7;
  v8 = v2[1];
  v9 = v2[2];
  v10 = v2[3];
  a2[4] = *v2;
  a2[5] = v8;
  a2[6] = v9;
  a2[7] = v10;
  return 0;
}
