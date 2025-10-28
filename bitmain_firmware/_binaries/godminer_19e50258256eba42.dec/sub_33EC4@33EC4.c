int __fastcall sub_33EC4(json_t *a1, int a2, const char *a3)
{
  int (**v4)(); // r0
  json_t *v5; // r0
  _BYTE v9[24]; // [sp+24h] [bp-1018h] BYREF
  int v10; // [sp+1024h] [bp-18h]
  int v11; // [sp+1028h] [bp-14h]
  json_t *v12; // [sp+102Ch] [bp-10h]
  int v13; // [sp+1030h] [bp-Ch]
  int v14; // [sp+1034h] [bp-8h]

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = a2;
  if ( a2 && a1 )
  {
    sub_2DE54(a1, 1, 79, *(const char **)(v14 + 8));
    v12 = (json_t *)json_array();
    v10 = atoi(a3);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "parameter = \"%s\", config = %d.", a3, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "reset_fpga_baud_old",
      19,
      2624,
      100,
      v9);
    v4 = dev_ctrl();
    ((void (__fastcall *)(int))v4[5])(v10);
    json_object_set_new(a1, "FPGA_BAUD", v12);
    v5 = (json_t *)json_integer(1, 0);
    json_object_set_new(a1, "id", v5);
    return v11;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "%s: input bad api param", "reset_fpga_baud_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "reset_fpga_baud_old",
      19,
      2617,
      100,
      v9);
    return -2147483646;
  }
}
