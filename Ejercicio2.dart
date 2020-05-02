import 'dart:io';
import 'dart:async';
import 'dart:convert';
import 'dart:async';

main(){
  File data= new File("/home/humberto/Descargas/datos.txt");
  data.readAsLines().then(processLines);
}

processLines(List<String> lines) {
  var file=new File("data_fin.txt");
  var sink = file.openWrite();
  for (var line in lines) {
    List row =line.split(';');
    double promedio = (double.parse(row[1])+double.parse(row[2])+double.parse(row[3])+double.parse(row[4])+double.parse(row[5]))/5;
    sink.write("$row[0];$promedio\n");
  }
  sink.close();

}

