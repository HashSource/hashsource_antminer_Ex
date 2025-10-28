char *__fastcall godminer_fan_monitor(int a1)
{
  char *v1; // r3
  int v3; // [sp+60h] [bp-1084h] BYREF
  const char *v4[7]; // [sp+1060h] [bp-84h] BYREF
  int v5; // [sp+107Ch] [bp-68h]
  const char *v6[7]; // [sp+1080h] [bp-64h] BYREF
  int v7; // [sp+109Ch] [bp-48h]
  int v8; // [sp+10A4h] [bp-40h]
  char *v9; // [sp+10A8h] [bp-3Ch]
  int v10; // [sp+10ACh] [bp-38h]
  char *v11; // [sp+10B0h] [bp-34h]
  int v12; // [sp+10B4h] [bp-30h]
  char *v13; // [sp+10B8h] [bp-2Ch]
  int v14; // [sp+10BCh] [bp-28h]
  char *v15; // [sp+10C0h] [bp-24h]
  char *flag_from_monitor; // [sp+10C4h] [bp-20h]

  ++dword_5AC384[*(_DWORD *)(a1 + 264)];
  flag_from_monitor = get_flag_from_monitor(a1);
  v15 = flag_from_monitor + 32;
  v14 = 1;
  if ( (*((_DWORD *)flag_from_monitor + 8) & 2) != 0 )
  {
    V_LOCK();
    sub_37C08(v4, "fan lost");
    logfmt_raw(&v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "fan lost happend");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "godminer_fan_monitor",
      20,
      668,
      20,
      &v3);
    V_LOCK();
    logfmt_raw(&v3, 0x1000u, 0, "Sweep error string = %s.", "F:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "godminer_fan_monitor",
      20,
      669,
      100,
      &v3);
    v13 = flag_from_monitor + 32;
    v12 = 1;
    *((_QWORD *)flag_from_monitor + 5) |= 2uLL;
  }
  v11 = flag_from_monitor + 32;
  v10 = 0;
  v1 = (char *)((*((_DWORD *)flag_from_monitor + 8) & 1) != 0);
  if ( (*((_DWORD *)flag_from_monitor + 8) & 1) != 0 )
  {
    V_LOCK();
    sub_37C08(v6, "fan slow");
    logfmt_raw(&v3, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "fan slow happend");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "godminer_fan_monitor",
      20,
      677,
      20,
      &v3);
    v9 = flag_from_monitor + 32;
    v8 = 0;
    v1 = flag_from_monitor + 32;
    *((_QWORD *)flag_from_monitor + 5) |= 1uLL;
  }
  return v1;
}
