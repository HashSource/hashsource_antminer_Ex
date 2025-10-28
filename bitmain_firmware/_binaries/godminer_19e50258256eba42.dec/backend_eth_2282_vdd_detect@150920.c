int __fastcall backend_eth_2282_vdd_detect(int a1)
{
  _BYTE v3[16]; // [sp+1Ch] [bp-1010h] BYREF
  _BYTE v4[10]; // [sp+101Ch] [bp-10h] BYREF
  int var2; // [sp+1026h] [bp-6h]

  LOWORD(var2) = 0;
  while ( (unsigned __int8)var2 <= 0x7Eu )
  {
    if ( sub_14CDF8(a1, var2, 0, v4, 1u) )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "%s addr %02x detected", "backend_eth_2282_vdd_detect", (unsigned __int8)var2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
        175,
        "backend_eth_2282_vdd_detect",
        27,
        982,
        40,
        v3);
      ++BYTE1(var2);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "%s addr %02x empty", "backend_eth_2282_vdd_detect", (unsigned __int8)var2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
        175,
        "backend_eth_2282_vdd_detect",
        27,
        987,
        40,
        v3);
    }
    LOBYTE(var2) = var2 + 1;
  }
  return BYTE1(var2);
}
