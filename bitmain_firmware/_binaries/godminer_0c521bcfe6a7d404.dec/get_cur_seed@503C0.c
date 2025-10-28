int __fastcall get_cur_seed(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  pthread_mutex_lock(&stru_1740F0);
  v2 = dword_174108[1];
  v3 = dword_174108[2];
  v4 = dword_174108[3];
  *a1 = dword_174108[0];
  a1[1] = v2;
  a1[2] = v3;
  a1[3] = v4;
  v5 = unk_17411C;
  v6 = unk_174120;
  v7 = unk_174124;
  a1[4] = unk_174118;
  a1[5] = v5;
  a1[6] = v6;
  a1[7] = v7;
  return pthread_mutex_unlock(&stru_1740F0);
}
