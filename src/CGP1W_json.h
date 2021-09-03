const char* _CGP1W_json = R""""(
{
   "brand":"xiaomi",
   "model":"CG_THP",
   "model_id":"CGP1W",
   "condition":["servicedata", "index", 0, "0809"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "servicedata", 20, 4, true],
         "post_proc":['/', 10]
      },
      "hum":{
         "decoder":["value_from_hex_data", "servicedata", 24, 4, true, false],
         "post_proc":['/', 10]
      },
      "pres":{
         "decoder":["value_from_hex_data", "servicedata", 32, 4, true, false],
         "post_proc":['/', 100]
      }
   }
})"""";