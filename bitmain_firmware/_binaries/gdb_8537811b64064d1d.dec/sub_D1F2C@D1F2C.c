int __fastcall sub_D1F2C(_DWORD *a1, int a2)
{
  int v2; // r3
  const char *v5; // r0
  int result; // r0
  int v7; // r2
  __int64 v8; // r0

  v2 = a1[3];
  switch ( v2 )
  {
    case 28:
      sub_2594D8(a2, "ftrace");
      break;
    case 29:
      sub_2594D8(a2, "strace");
      break;
    case 27:
      sub_2594D8(a2, "trace");
      break;
    default:
      v8 = sub_94728((int)"breakpoint.c", 12978, "unhandled tracepoint type %d", v2);
      return sub_D1FEC(v8, HIDWORD(v8));
  }
  v5 = (const char *)((int (__fastcall *)(_DWORD))loc_19D250)(a1[19]);
  sub_2594D8(a2, " %s", v5);
  result = sub_D1CB4((int)a1, a2);
  v7 = a1[35];
  if ( v7 )
    return sub_2594D8(a2, "  passcount %d\n", v7);
  return result;
}
