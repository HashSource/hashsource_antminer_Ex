int reboot_godminer()
{
  _BYTE v1[8]; // [sp+14h] [bp-1008h] BYREF
  FILE *stream; // [sp+1014h] [bp-8h]

  stream = fopen("/tmp/miner_act", "w");
  if ( !stream )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "creat miner_act node failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "reboot_godminer",
      15,
      195,
      100,
      v1);
  }
  fprintf(stream, "%d", 2);
  return fclose(stream);
}
