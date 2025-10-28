int __fastcall get_cur_seed_2282(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  pthread_mutex_lock(&stru_1959B8);
  v2 = dword_1959D0[1];
  v3 = dword_1959D0[2];
  v4 = dword_1959D0[3];
  *a1 = dword_1959D0[0];
  a1[1] = v2;
  a1[2] = v3;
  a1[3] = v4;
  v5 = unk_1959E4;
  v6 = unk_1959E8;
  v7 = unk_1959EC;
  a1[4] = unk_1959E0;
  a1[5] = v5;
  a1[6] = v6;
  a1[7] = v7;
  return pthread_mutex_unlock(&stru_1959B8);
}
