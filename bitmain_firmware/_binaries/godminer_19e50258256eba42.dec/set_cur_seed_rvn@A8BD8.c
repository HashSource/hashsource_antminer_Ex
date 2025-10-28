int __fastcall set_cur_seed_rvn(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r3

  pthread_mutex_lock(&stru_5AD598);
  memset(dword_5AD578, 0, 0x20u);
  v1 = a1[1];
  v2 = a1[2];
  v3 = a1[3];
  dword_5AD578[0] = *a1;
  dword_5AD578[1] = v1;
  dword_5AD578[2] = v2;
  dword_5AD578[3] = v3;
  v4 = a1[5];
  v5 = a1[6];
  v6 = a1[7];
  unk_5AD588 = a1[4];
  unk_5AD58C = v4;
  unk_5AD590 = v5;
  unk_5AD594 = v6;
  return pthread_mutex_unlock(&stru_5AD598);
}
