int __fastcall sub_3241C(json_t *a1, int a2, char *a3)
{
  _BYTE v6[28]; // [sp+20h] [bp-105Ch] BYREF
  int v7; // [sp+1050h] [bp-2Ch] BYREF
  char *nptr; // [sp+1054h] [bp-28h] BYREF
  __int64 v9; // [sp+1058h] [bp-24h]
  unsigned __int8 v10; // [sp+1067h] [bp-15h]
  _DWORD *all_created_runtime; // [sp+1068h] [bp-14h]
  int v12; // [sp+106Ch] [bp-10h]
  int v13; // [sp+1070h] [bp-Ch]
  char *v14; // [sp+1074h] [bp-8h]

  v12 = 0;
  v7 = 0;
  v13 = a2;
  v14 = a3;
  all_created_runtime = get_all_created_runtime(&v7);
  if ( v7 > 0 )
  {
    if ( v13 && a1 )
    {
      sub_2DE54(a1, 1, 80, *(const char **)(v13 + 8));
      if ( v14 && *v14 )
      {
        nptr = v14;
        v10 = strtol(v14, &nptr, 10);
        ++nptr;
        v9 = strtoll(nptr, &nptr, 10);
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "%s: set chain_offset %d uart print time %lld ms", "set_uart_print_time", v10, v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/api_new.c",
          137,
          "set_uart_print_time",
          19,
          2288,
          40,
          v6);
        set_remain_debug_print_time(all_created_runtime[v10] + 1072, v9);
        set_remain_debug_print_time(all_created_runtime[v10] + 1144, v9);
        return v12;
      }
      else
      {
        return -2147483646;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "%s: input bad api param", "set_uart_print_time");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "set_uart_print_time",
        19,
        2277,
        100,
        v6);
      return -2147483646;
    }
  }
  else
  {
    sub_2DE54(a1, 0, 10, "No ASCs");
    return -2147483647;
  }
}
