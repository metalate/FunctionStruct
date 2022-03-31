package test;

import java.io.*;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;

public class Test {
    public static void main(String [] args) throws IOException {

        String pathToFile = "program.c"; // The path to your file.
        List< String > fileContents = Files.readAllLines(Paths.get(pathToFile)); // For some reason, Disqus de-capitalises String when I remove the space.

        // This will reference one line at a time
        String line = null;

        try {
            // FileReader reads text files in the default encoding.
            FileReader fileReader = 
                new FileReader(pathToFile);

            // Always wrap FileReader in BufferedReader.
            BufferedReader bufferedReader = 
                new BufferedReader(fileReader);

            while((line = bufferedReader.readLine()) != null) {
                System.out.println(line);
            }   

            // Always close files.
            bufferedReader.close();         
        }
        catch(FileNotFoundException ex) {
            System.out.println(
                "Unable to open file '" + 
                pathToFile + "'");                
        }
        catch(IOException ex) {
            System.out.println(
                "Error reading file '" 
                + pathToFile + "'");                  
            // Or we could just do this: 
            // ex.printStackTrace();
        }
    }
}