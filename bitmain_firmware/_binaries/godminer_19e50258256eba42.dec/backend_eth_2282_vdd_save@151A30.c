int __fastcall backend_eth_2282_vdd_save(int a1, char a2)
{
  int v2; // r3
  _BYTE v5[8]; // [sp+1Ch] [bp-1008h] BYREF
  int v6; // [sp+101Ch] [bp-8h]

  v6 = -1;
  switch ( a2 )
  {
    case 0:
      v6 = save_mps_param(a1, 1);
      goto LABEL_7;
    case 1:
    case 2:
      v6 = save_mps_param(a1, 2);
      goto LABEL_7;
    case 3:
    case 4:
      v6 = save_mps_param(a1, 3);
      goto LABEL_7;
    case 5:
      v6 = save_mps_param(a1, 4);
      pic1704_enable_disable_dc_dc(a1, 1);
      usleep(0x493E0u);
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "enable en for chain-%d", a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
        175,
        "backend_eth_2282_vdd_save",
        25,
        1313,
        40,
        v5);
LABEL_7:
      v2 = v6;
      break;
    default:
      v2 = -1;
      break;
  }
  return v2;
}
