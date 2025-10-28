int __fastcall OpReagentService::convertCloseToRfid(OpReagentService *this)
{
  chip_setting_software_reset_ltc((int)this);
  return 0;
}
