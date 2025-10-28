int __fastcall send_fake_work_kas(int a1)
{
  int (**v1)(); // r0
  int (**v2)(); // r0
  int v3; // r3
  _DWORD v6[13]; // [sp+8h] [bp-44h] BYREF
  __int16 v7; // [sp+3Ch] [bp-10h]
  int v8; // [sp+40h] [bp-Ch]
  unsigned int v9; // [sp+44h] [bp-8h]

  v6[0] = 53520981;
  v6[1] = -1996423168;
  v6[2] = 1568885659;
  v6[3] = -2022340884;
  v6[4] = 739994112;
  v6[5] = 2023104256;
  v6[6] = 504402544;
  v6[7] = 232286627;
  v6[8] = 1496646687;
  v6[9] = 295890251;
  v6[10] = 1890778236;
  v6[11] = 60442;
  v6[12] = 0;
  v7 = 13171;
  v9 = 54;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 992));
  do
    v1 = dev_ctrl();
  while ( ((int (__fastcall *)(_DWORD))v1[22])(*(_DWORD *)(a1 + 264)) < v9 );
  v2 = dev_ctrl();
  v8 = ((int (__fastcall *)(_DWORD, _DWORD *, unsigned int))v2[16])(*(_DWORD *)(a1 + 264), v6, v9);
  sub_16230C(a1 + 1144, v9, (unsigned __int8 *)v6, *(_DWORD *)(a1 + 272));
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 992));
  return v3;
}
