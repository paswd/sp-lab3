(define (cc amount largest-coin)
  (cond ((or (= amount 0) (= largest-coin 1)) 1)
  ((not(and (> amount 0) (> largest-coin 0))) 0)
  (else (+ (cc amount (next-coin largest-coin)) (cc (- amount largest-coin) largest-coin)))))


(define (count-change amount)
	(cc amount LAGEST-COIN))


(define (next-coin coin)
	(cond ((= coin 25) 15)
		((= coin 15) 5)
		((= coin 5) 2)
		(else 0)))

(define (GR-AMOUNT)
	(* 10 LAST-DIGIT-OF-GROUP-NUMBER))

(define LAGEST-COIN 25)
(define LAST-DIGIT-OF-GROUP-NUMBER 8)

(display " SPA variant 17")
(newline)
(display " 2-5-15-25")
(newline)
(display "count__change for 100 \t= ")
(display (count-change 100))
(newline)
(display "count__change for ")
(display (GR-AMOUNT))
(display " \t= ")
(display (count-change (GR-AMOUNT)))
