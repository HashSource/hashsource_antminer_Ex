char *__fastcall sub_39CA8(int a1, _DWORD *a2)
{
  char *result; // r0
  _BYTE v5[8]; // [sp+1Ch] [bp-1008h] BYREF
  char *v6; // [sp+101Ch] [bp-8h]

  while ( 1 )
  {
    result = (char *)getopt_long(a1, (int)a2, "a:c:i:b:hl:p:Po:u:v:F", (int)&off_34FC3C, 0);
    v6 = result;
    if ( (int)result < 0 )
      break;
    parse_arg(v6, (char *)optarg);
  }
  if ( a1 > optind )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s: unsupported non-option argument -- '%s'", *a2, a2[optind]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "parse_cmdline",
      13,
      449,
      100,
      v5);
    exit(1);
  }
  return result;
}
