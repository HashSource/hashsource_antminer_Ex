int __fastcall sub_24218(int a1, int a2, const char *a3)
{
  _BOOL4 v3; // r4
  void *v6; // r0
  int v7; // r9
  int v8; // r7
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v14; // r0
  _BYTE v15[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = a1 == 0;
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK(a1);
    v14 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/api_new.c",
      140,
      "reset_fpga_baud_old",
      19,
      2113,
      100,
      v15);
    return -2147483646;
  }
  else
  {
    v6 = sub_23EE4(a1, 1, 79, *(const char **)(a2 + 8));
    v7 = json_array(v6);
    v8 = strtol(a3, 0, 10);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v9);
    v10 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/api_new.c",
            140,
            "reset_fpga_baud_old",
            19,
            2120,
            100,
            v15);
    v11 = dev_ctrl(v10);
    (*(void (__fastcall **)(int))(v11 + 16))(v8);
    json_object_set_new(a1, "FPGA_BAUD", v7);
    v12 = json_integer(1, 0);
    json_object_set_new(a1, "id", v12);
    return 0;
  }
}
