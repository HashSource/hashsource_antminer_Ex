char **__fastcall sub_2775A0(char **a1, _DWORD *a2)
{
  const char *v4; // r0
  const char *v5; // r0

  switch ( *a2 )
  {
    case 0:
      sub_93200(a1, "%sexited, status = %d", "status->kind = ", a2[1]);
      break;
    case 1:
      v4 = (const char *)sub_999FC(a2[1]);
      sub_93200(a1, "%sstopped, signal = %s", "status->kind = ", v4);
      break;
    case 2:
      v5 = (const char *)sub_999FC(a2[1]);
      sub_93200(a1, "%ssignalled, signal = %s", "status->kind = ", v5);
      break;
    case 3:
      sub_93200(a1, "%sloaded", "status->kind = ");
      break;
    case 4:
      sub_93200(a1, "%sforked", "status->kind = ");
      break;
    case 5:
      sub_93200(a1, "%svforked", "status->kind = ");
      break;
    case 6:
      sub_93200(a1, "%sexecd", "status->kind = ");
      break;
    case 7:
      sub_93200(a1, "%svfork-done", "status->kind = ");
      break;
    case 8:
      sub_93200(a1, "%sentered syscall", "status->kind = ");
      break;
    case 9:
      sub_93200(a1, "%sexited syscall", "status->kind = ");
      break;
    case 0xA:
      sub_93200(a1, "%sspurious", "status->kind = ");
      break;
    case 0xB:
      sub_93200(a1, "%signore", "status->kind = ");
      break;
    case 0xC:
      sub_93200(a1, "%sno-history", "status->kind = ");
      break;
    case 0xD:
      sub_93200(a1, "%sno-resumed", "status->kind = ");
      break;
    case 0xE:
      sub_93200(a1, "%sthread created", "status->kind = ");
      break;
    case 0xF:
      sub_93200(a1, "%sthread exited, status = %d", "status->kind = ", a2[1]);
      break;
    default:
      sub_93200(a1, "%sunknown???", "status->kind = ");
      break;
  }
  return a1;
}
