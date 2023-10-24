import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

//create a date time convert class
public class datetime_convert {
    public static void main(String[] args) {
        //string datestr
        String dateStr = "2022-03-17 10:45:30";
        //format the date 
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        //format the date 
        LocalDateTime dateObj = LocalDateTime.parse(dateStr, formatter);
        //format the date 
        String formattedDate = dateObj.format(DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss"));
        //print
        System.out.println(formattedDate);
    }
}
