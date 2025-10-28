int __fastcall set_miner_6060info_some_chip_not_working_err(int result, char a2)
{
  int v3; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( result > 15 )
  {
    V_LOCK(result);
    v3 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
      172,
      "set_miner_6060info_some_chip_not_working_err",
      44,
      48,
      40,
      v4);
    result = 0;
  }
  byte_174400[result + 34] = a2;
  return result;
}
