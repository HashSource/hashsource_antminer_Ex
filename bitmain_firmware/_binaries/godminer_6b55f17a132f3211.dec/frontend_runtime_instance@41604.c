int __fastcall frontend_runtime_instance(int a1)
{
  int v1; // r4
  int v3; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = dword_165CB0;
  if ( !dword_165CB0 )
  {
    V_LOCK(a1);
    v3 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_interface.c",
      156,
      "frontend_runtime_instance",
      25,
      67,
      100,
      v4);
  }
  return v1;
}
