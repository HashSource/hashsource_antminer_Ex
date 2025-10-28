FILE *update_sweep_result()
{
  FILE *result; // r0
  _BYTE v1[16]; // [sp+14h] [bp-1010h] BYREF
  unsigned __int16 v2; // [sp+1016h] [bp-Eh] BYREF
  FILE *stream; // [sp+1018h] [bp-Ch]
  FILE *v4; // [sp+101Ch] [bp-8h]

  v4 = 0;
  result = fopen("/nvdata/sweep_result_v2.txt", "r");
  stream = result;
  if ( !result )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "Not find /nvdata/sweep_result_v2.txt");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "update_sweep_result",
      19,
      1765,
      60,
      v1);
    v4 = fopen("/nvdata/sweep_result.txt", "r");
    if ( v4 )
    {
      stream = fopen("/nvdata/sweep_result_v2.txt", "w");
      while ( fscanf(v4, "%hu", &v2) == 1 )
      {
        if ( v2 <= 1u )
          v2 = 0;
        else
          v2 -= 2;
        fprintf(stream, "%hu\n", v2);
      }
      fclose(v4);
      fclose(stream);
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, "Upgrade /nvdata/sweep_result.txt to sweep_result_v2.txt");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "update_sweep_result",
        19,
        1784,
        60,
        v1);
      return (FILE *)puts("Upgrade /nvdata/sweep_result.txt to sweep_result_v2.txt.");
    }
    else
    {
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, "Error opening /nvdata/sweep_result.txt");
      V_UNLOCK();
      return (FILE *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/god-miner.c",
                       139,
                       "update_sweep_result",
                       19,
                       1768,
                       60,
                       v1);
    }
  }
  return result;
}
