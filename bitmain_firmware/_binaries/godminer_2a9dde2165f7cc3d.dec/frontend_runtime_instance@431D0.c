int __fastcall frontend_runtime_instance(int a1)
{
  int v1; // r4
  int v3; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = dword_173F78;
  if ( !dword_173F78 )
  {
    V_LOCK(a1);
    v3 = logfmt_raw((int)v4, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_interface.c",
      160,
      "frontend_runtime_instance",
      25,
      74,
      100,
      v4);
  }
  return v1;
}
