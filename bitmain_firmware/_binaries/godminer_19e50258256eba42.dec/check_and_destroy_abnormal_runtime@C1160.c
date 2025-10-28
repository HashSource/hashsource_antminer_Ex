int check_and_destroy_abnormal_runtime()
{
  _BYTE v1[12]; // [sp+10h] [bp-140Ch] BYREF
  _DWORD v2[256]; // [sp+1010h] [bp-40Ch] BYREF
  int i; // [sp+1410h] [bp-Ch]
  int v4; // [sp+1414h] [bp-8h]

  i = 0;
  memset(v2, 0, sizeof(v2));
  v4 = 0;
  pthread_mutex_lock(&stru_5BAB0C);
  for ( i = 0; i < dword_5BAB08; ++i )
  {
    if ( *(_DWORD *)(dword_5BAA08[i] + 464) == *(_DWORD *)(dword_5BAA08[i] + 372) )
    {
      v2[v4++] = dword_5BAA08[i];
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v1,
        0x1000u,
        0,
        "chain %d runtime check asic number error, destroy it!",
        *(_DWORD *)(dword_5BAA08[i] + 272));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_interface.c",
        155,
        "check_and_destroy_abnormal_runtime",
        34,
        116,
        80,
        v1);
      set_miner_6060info_asic_num_less_than_design_err(*(_DWORD *)(dword_5BAA08[i] + 272), 1);
      (*(void (__fastcall **)(_DWORD))(dword_5BAA08[i] + 24))(dword_5BAA08[i]);
      (*(void (__fastcall **)(_DWORD))(dword_5BAA08[i] + 32))(dword_5BAA08[i]);
      free((void *)dword_5BAA08[i]);
      dword_5BAA08[i] = 0;
    }
  }
  for ( i = 0; i < v4; ++i )
    dword_5BAA08[i] = v2[i];
  dword_5BAB08 = v4;
  return pthread_mutex_unlock(&stru_5BAB0C);
}
